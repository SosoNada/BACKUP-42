#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef char Atom[50];

typedef struct{
	int count;
	Atom *atoms;
} AtomTable;

AtomTable *init_atom_table() {
	AtomTable *table;
	if(!(table = malloc(sizeof(*table))))
			return NULL;


	table->count = 0;
	table->atoms = NULL;
	return table;
}

int add_atom_to_table(AtomTable *table, Atom atom) {
	int i = 0;

	while (i < table->count) {
		if(strcmp(table->atoms[i], atom) == 0)
			return i;
		i++;
	}

	table->count++;

	Atom *tmp_atoms;
	if (!(tmp_atoms = realloc(table->atoms, sizeof(Atom) * table->count)))
		return -1;
	else
		table->atoms = tmp_atoms;
	
	strcpy(table->atoms[table->count -1], atom);
	return table->count -1;
}

Atom *get_atom_from_table(AtomTable *table, int index) {
	if(index >= 0 && index < table->count)
		return &(table->atoms[index]);
	return NULL;
}

void free_atom_table(AtomTable *table) {
	free(table->atoms);
	free(table);
}

int main(int ac, char **av) {
	(void)ac;
	

	AtomTable *table = init_atom_table();

	char choice = 'y';
	while (choice == 'y') {
		Atom atom[50];	
		printf("Atom a jouter a la table d'atom : ");
		scanf("%s", atom);
		getchar();
		putchar('\n');

		int index_atom = add_atom_to_table(table, atom);
		printf("Atom ajoute a index [%d]\n\n", index_atom);
		
		printf("Voulez vous ajouter un nouvel atome ? (y/n) : ");
		scanf("%c", &choice);
		getchar();
		putchar('\n');
	}


	char choice2 = 'y';
	printf("Voulez vous recuperer un Atom ? (y/n) : ");
	scanf("%c", &choice2);
	getchar();
	putchar('\n');
	if (choice2 == 'y') {
		char choice3 = 'y';
		while(choice3 == 'y') {
			int index_backup = 0;
			printf("Atom a recupere [index] : ");
			scanf("%d", &index_backup);
			getchar();
			putchar('\n');

			Atom *Atom_backup = get_atom_from_table(table, index_backup);
				if (Atom_backup == NULL) {
				printf("Index invalide\n");
				return 1;
			}else
				printf("Atom recupere = [%s]\n", Atom_backup);
			printf("Voulez vous recuperer un autre Atom ? (y/n) : ");
			scanf("%c", &choice3);
			getchar();
			putchar('\n');
		}	
			
	}
	free_atom_table(table);

	return 0;
}

