#include "statique.h"
// On inclut le header
#define fichier "voiture.pbm"
// On cree une valeur globale pour changer l'image a cet endroit seulement

void main()
// Fonction principale
{
	system("clear");
// On nettoie l'ecran

	FILE *file = fopen(fichier, "r");
// On ouvre le fichier en lecture seule
	int x, y;
// Declaration de x et y, position de l'image a l'ecran

	taille(file, &x, &y);
// On appelle la fonction taille avec comme arguments le fichier et les pointeurs de x et y
	fclose(file);
// On ferme le fichier

	file = fopen(fichier, "r");
// On le rouvre
	afficher(file, x, y);
// On fait appelle a la fonction afficher avec comme argument le fichier et la taille de l'image

	system("/bin/stty raw");
// On passe le system en mode "raw" afin de vider le tampon automatiquement
	
	while(!getchar()){}
// Tant qu'aucune touche n'est actionnee (creation d'une boucle infinie)

	system("/bin/stty cooked");
// On repasse le systeme en mode "cooked", le mode normal donc

	system ("clear");
// On renettoie l'ecran

	fclose(file);
// On ferme le fichier
}
