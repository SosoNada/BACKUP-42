#include <mlx.h>
#include <stdlib.h>
#include <X11/keysym.h>
#include <X11/X.h>
#include <stdio.h>

# define WINDOW_WIDTH 800
# define WINDOW_HEIGHT 600
# define MLX_ERROR 1

# define WHITE_PIXEL 0xFFFFFF
# define RED_PIXEL 0xCC0000
# define GREEN_PIXEL 0x00FF00
# define BLUE_PIXEL 0x0000FF



/************************************************************************************************************************
 *															*	
 * 						STUCTURE DE DATA ET D'INFOS						*	
 *															*
 ************************************************************************************************************************
 *															*	
 * 	Description :													*
 *															*
 *		1) Structure d'info recevant les parametre de retour de mlx_get_data_addr : [t_img]			*
 *															*				
 *			- 1 : mlx_img = cree une new image en memoire partage						*
 *															*	
 *			- 2 : addr = address memoire du premier pixel partage						*
 *															*	
 *			- 3 : bpp = bit par pixel									*	
 *															*	
 *			- 4 : line_len = ongeur de la ligne (100 * 4 octet = 2400)					*
 *															*
 *			- 5 : endian = endianess (MSB, LSB)								*				
 *															*	
 *															*	
 *		2) Strcuture de parametrage general : [t_data]								*			
 *															*
 *			- 1 : mlx = ID de connexion avec le serveur X							*
 *															*
 *			- 2 : mlx_win = ID de la fenetre graphique rattacher a linstance de connexion au serveur X	*
 *															*		
 *			- 3 : img = stock l'adresse de l'image et les infos qui lui sont associe			*
 *															*		
 *															*
 *		3) Structure de caracteristique d'un rectangle : [t_rect]						*
 *															*	
 *			- 1 : start_x = coordonne de depart de la colone du retangle					*
 *															*	
 *			- 2 : start_y = coordonne de depart de la ligne du rectangle					*
 *															*	
 *			- 3 : width = largeur souhaiter du rectangle							*
 *															*
 *			- 4 : height = hauteur souhaiter du rectangle							*
 *															*	
 *			- 5 : color = couleur souhaiter du rectangle							*
 *															*
 *															*	
 ************************************************************************************************************************/



typedef struct s_img /* 1 */
{
	void *mlx_img; 
	char *addr; 
	int bpp; 
	int line_len; 
	int endian; 
}	t_img;

typedef struct s_data /* 2 */
{
	void *mlx; 
	void *mlx_win; 
	t_img img; 
} 	t_data;


typedef struct s_rect /* 3 */
{
	int start_x; 
	int start_y; 
	int width; 
	int height; 
	int color; 
}	t_rect;



/****************************************************************************************************************
 *														*		
 * 						HANDLER D'EVEMNEMENT						*
 *														*
 ****************************************************************************************************************
 *														*
 * 	Description :												*
 *														*	
 * 		1) handler d'evenement pour le click sur la croix rouge : [handle_redcross_keypress()]		*
 *														*
 * 			- code 1 : detruit fenetre graphique cree par mlx_new_window()				*
 *														*
 *														*
 * 		2) handler d'evenement pour une touche appuye : [handle_keypress()]				*
 *														*
 * 			- code 2 : si la touche appuyer et 'echap'						*
 *														*
 * 			- code 3 : detruit fenetre graphique cree par mlx_new_window()				*
 *														*
 * 			- code 4 : affiche l'ID de la touche							*
 *														*
 *														*
 * 		3)  handler d'evenemnt pour une touche relacher : [handle_keyrelease()]  			*
 *														*
 * 			- code 1 : affiche l'ID de la touche							*
 *														*
 ****************************************************************************************************************/



int	handle_redcross_keypress(t_data *data) /* 1 */
{
	mlx_destroy_window(data->mlx, data->mlx_win); 
	data->mlx_win = NULL;

	return 0;
}

int	handle_keypress(int keysym, t_data *data) /* 2 */
{
	if (keysym == XK_Escape) 
	{
		mlx_destroy_window(data->mlx, data->mlx_win); 
		data->mlx_win = NULL;
	}

	printf("Keypress: [%d]\n", keysym); 
	return 0;
}


int	handle_keyrelease(int keysym, void *data) /* 3 */
{
	printf("Keyrelease: [%d]\n", keysym); 

	return 0;
}



/****************************************************************************************************************************************************************	
 *																				*	
 * 									DESSIN DE PIXEL										*	
 *																				*
 ****************************************************************************************************************************************************************
 *																				*		
 *	Description :																		*	
 *																				*			
 *		1) Accede a un pixel specifique dans l'image partage en utlisant ses coordonne : [img_pix_put()]						*		
 *																				*	
 *			- code 1 : accede au pixel a partir de l'adresse du premier pixel									*
 *																				*		
 *			- code 2 : modifie ensuite sa couleur avec celle specifie										*
 *																				*
 *																				*
 *		2) Remplit la fenêtre avec un arrière-plan de la couleur indiquer : [put_background()]								*			
 *																				*
 *			- code 1 : tant qu'on a pas atteint la taille de la fenêtre verticalement								*
 *																				*	
 *			- code 2 : on remplit la ligne colonne par colonne											*	
 *																				*	
 *			- code 3 : place le pixel de couleur 'color' à la position (j, i) dans l'image jusqu'à ce que la hauteur de la fenêtre soit atteinte	*
 *																				*	
 *																				*	
 *		3) Dessine un rectangle : [rectangle_put()]													*	
 *																				*
 *			- code 1 : Tant que la ligne n'a pas atteint la taille souhaitée depuis son point de départ						*
 *																				*	
 *			- code 2 :  On remplit la ligne colonne par colonne											*		
 *																				*	
 *			- code 3 : Place le pixel de couleur 'color' à la position (j, i) dans l'image jusqu'à ce que la hauteur de la fenêtre soit atteinte 	*
 *																				*
 *																				*
 *		4) Fonction d'affichage d'image dans mlx_loop_hook() : [pixel_put2()]										*		
 *																				*
 *			- code 1 : Remplit l'arrière-plan de l'image avec la couleur blanche									*	
 *																				*	
 *			- code 2 : Dessine un rectangle rouge													*
 *																				*	
 *			- code 3 : Dessine un rectangle bleu													*		
 *																				*	
 *			- code 4 : Affiche l'image sur la fenêtre												*
 *																				*
 *																				*				
 ****************************************************************************************************************************************************************/



void	img_pix_put(t_img *img, int x, int y, int color) /* 1 */
{
	char *pixel;

	pixel = img->addr + (y * img->line_len + x * (img->bpp / 8)); 
	*(int *)pixel = color; 
}


int	put_background(t_img *img, int color) /* 2 */
{
	int i;
	int j;

	i = 0;
	while (i < WINDOW_HEIGHT) 
	{
		j = 0;
		while (j < WINDOW_WIDTH)  
			img_pix_put(img, j++, i, color); 

		i++; 
	}

	return 0;
}


int	rectangle_put(t_img *img, t_rect rect) /* 3 */
{
	int i;
	int j;


	i = rect.start_y;
	while (i < (rect.start_y + rect.height)) 
	{
		j = rect.start_x;
		while (j < (rect.start_x + rect.width)) 
			img_pix_put(img, j++, i, rect.color); 
		i++;
	}

	return 0;
}


int	pixel_put2(t_data *data) /* 4 */
{
	if (data->mlx_win == NULL)
		return (1);

	put_background(&data->img, WHITE_PIXEL); 
	rectangle_put(&data->img, (t_rect){WINDOW_WIDTH - 100, WINDOW_HEIGHT - 100, 100, 100, RED_PIXEL}); 
	rectangle_put(&data->img, (t_rect){0 , 0, 100, 100, BLUE_PIXEL}); 
	mlx_put_image_to_window(data->mlx, data->mlx_win, data->img.mlx_img, 0, 0); 


	return 0;
}


/*int	pixel_put(t_data *data)
{
	if (data->mlx_win != NULL)
		mlx_pixel_put(data->mlx, data->mlx_win,
			WINDOW_WIDTH / 2, WINDOW_HEIGHT / 2, RED_PIXEL);
		mlx_pixel_put(data->mlx, data->mlx_win,
			WINDOW_WIDTH / 3, WINDOW_HEIGHT / 3, GREEN_PIXEL);
		mlx_pixel_put(data->mlx, data->mlx_win,
			WINDOW_WIDTH / 4, WINDOW_HEIGHT / 4, BLUE_PIXEL);


	return (0);
}*/



/****************************************************************************************************************	
 * 														*	
 * 							MAIN							*
 *														*	
 ****************************************************************************************************************
 *														*
 *	Description :												*
 *														*
 *		1) Strcuture acceuillant les infos : [t_data]							*
 *														*	
 *		2) Initialisation de la connexion au serveur X en fournissant un ID de connexion : [mlx_init()] *	
 *														*	
 *		3) Creation d'une nouvelle fenetre relie au Serveur X : [mlx_new_window()]			*
 *														*
 *		4) Creation d'une nouvelle image en memoire partage : [mlx_new_image()] 			*
 *														*
 *		5) Obtention des infos sur l'image cree : [mlx_get_data_addr()]					*		
 *														*
 *		6) Boucle d'affichage d'image : [mlx_loop_hook()]						*	
 *														*	
 *		7) Fonction de gestion d'evenement de touche : [mlx_hook()] 					*
 *														*	
 *		8) Boucle principae de gestion d'evenement : [mlx_loop]						*		
 *														*
 *		9) Sortie de boucle si plus de fenetre et destruction de l'instance de connexion		*
 *														*	
 *		10) Destruction de l'image en sortie de boucle : [mlx_destroy_image()]				*	
 *														*
 *		11) destruction de l'affichage par le serveur X : [ mlx_destroy_display]			*
 *														*
 *		12) Liberation de la memoire cree poour la connexion au serveur X : [free()]			*
 *														*	
 *														*	
 ****************************************************************************************************************/



int	main(void)
{
	t_data data; /* 1 */

	data.mlx = mlx_init(); /* 2 */
	if (data.mlx ==  NULL)
		return (MLX_ERROR);

	data.mlx_win = mlx_new_window(data.mlx, WINDOW_WIDTH, WINDOW_HEIGHT, "Solong"); /* 3 */
	if (data.mlx_win ==  NULL)
	{
		free(data.mlx_win);
		return (MLX_ERROR);
	}
	

	data.img.mlx_img = mlx_new_image(data.mlx, 800, 600); /* 4 */

	data.img.addr = mlx_get_data_addr(data.img.mlx_img, &data.img.bpp, &data.img.line_len, &data.img.endian); /* 5 */

	//mlx_loop_hook(data.mlx, &pixel_put, &data);
	mlx_loop_hook(data.mlx, &pixel_put2, &data); /* 6 */
	mlx_hook(data.mlx_win, KeyPress, KeyPressMask, &handle_keypress, &data); /* 7 */
	mlx_hook(data.mlx_win, KeyRelease, KeyReleaseMask, &handle_keyrelease, &data); /* 7 */
	mlx_hook(data.mlx_win, DestroyNotify, StructureNotifyMask, handle_redcross_keypress, &data); /* 7 */

	mlx_loop(data.mlx); /* 8 */

	/* 9 */

	mlx_destroy_image(data.mlx, data.img.mlx_img); /* 10 */
	mlx_destroy_display(data.mlx); /* 11 */
	free(data.mlx); /* 12 */


	return 0;
}
