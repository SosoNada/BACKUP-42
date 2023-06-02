int rechercheLettre(char lettre, char motSecret[], int *lettreTrouvee)
{
	int bonneLettre = 0;

	for(int i = 0; motSecret[i]; i++)
	{
		if(lettre == motSecret[i])
		{
			bonneLettre = 1;
			lettreTrouvee[i] = 1;
		}
	}
	return bonneLettre;
}
