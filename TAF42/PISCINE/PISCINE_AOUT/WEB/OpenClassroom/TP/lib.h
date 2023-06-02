#ifndef INIT_H
#define INIT_H

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include "lib.h"

int tailleMot(char *str);
void initTableau(int *lettre, int taille);
int gagne(int *lettreTrouvee, int nombreLettre);
char lireCaractere();
int rechercheLettre(char lettre, char motSecret[], int *lettreTrouvee);

#endif
