#include <stdio.h>
typedef struct Personne Personne;

struct Personne
{
	char nom[100];
	char prenom[100];
	int age;
};

int main(int argc, char *argv[])
{
	Personne personne;
	printf("Quel est votre nom : ");
	scanf("%s", personne.nom);
	printf("Quel est votre prenom : ");
	scanf("%s", personne.prenom);
	printf("Quelle est votre age : ");
	scanf("%d", &personne.age);

	printf("\nNom : %s\nPrenom : %s\nAge : %d\n", \
	personne.nom, personne.prenom, personne.age);

	return 0;
}
