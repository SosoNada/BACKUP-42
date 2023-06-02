#ifndef LISTECHAINEE_H
# define LISTCHAINEE_H

#include <stdlib.h>
#include <stdio.h>

typedef struct Element
{
        int nombre;
        struct Element *suivant;
} Element;

typedef struct Liste
{
        Element *premier;
	int nbElement;
} Liste;


void insertion(Liste *liste, int nvNombre);
void insertionNext(Liste *liste, Element *add_next, int nvNombre);
void afficherListe(Liste *liste);
void suppression(Liste *liste);
void suppression_d(Liste *liste, Element *aSupprimer);
void listeClear(Liste *liste);
Liste *initialisation();

#endif
