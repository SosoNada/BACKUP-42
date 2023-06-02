#!/bin/bash

tableau=(23 45 34 1 2 3)

# 3éme valeur
echo ${tableau[2]}

# toute les valeurs
echo ${tableau[@]}

# nombre d'éléments
echo ${#tableau[@]}
