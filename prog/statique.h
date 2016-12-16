#include <stdio.h>
// Bibliotheque gerant les entrees et sorties
#include <stdlib.h>
// Bibliotheque ajoutant des types de variables
#include <sys/wait.h>
// Inclut le wait pour le multiprocessus
#include <sys/types.h>
// Inclut des structures avec notamment celle du temps, qui nous interesse ici
#include <unistd.h>
// Bibliotheque utilisee pour importer divers types et structure, le fork ici
#include <time.h>
// Bibliotheque de gestion du temps
#include <dirent.h>
// Gestion des dossiers

void afficher(FILE *, int, int);
// Fonction qui affiche une image, ne renvoie rien, prend le fichier image, x et y en argument
void taille(FILE *, int*, int*);
// Fonction qui va relever la taille, ne renvoie rien, prend l'image et les pointeurs vers x et y en argument
int alea (const int, const int);
// Declaration de la fonction qui va choisir un nombre aleatoire, renvoie un entier, prend les bornes min et max en argument
