#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
	int nombreDAmis = 0, i = 0;
	int *ageAmis = NULL;
		
	printf("Combien avez-vous d'amis ? ");
	scanf("%d", &nombreDAmis);

	if(nombreDAmis > 0)
	{
		ageAmis = malloc(nombreDAmis * sizeof(int));
		
		if(ageAmis == NULL)
			exit(0);

		while(i < nombreDAmis)
		{
			printf("Quel age a l'ami n° %d ? ", \
					i + 1);
			scanf("%d", &ageAmis[i++]);
		}

		printf("\n\nVos amis on les âges suivant :\n");
		for(i = 0 ; i < nombreDAmis ; i++)
			printf("%d ans\n", ageAmis[i]);

		free(ageAmis);
	}

	return 0;
}
