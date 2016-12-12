#include "statique.h"
//[]

void main()
{
	system ("clear");
 // Nettoie la console	

	int posx, posy;
 // posx et poy = coordonnées de l'image
	char ligne[255];
 // String où on stocke la ligne du fichier
	char touche;
 // UTILE ?
	FILE *file = fopen ("ex1.pbm","r");
 // On ouvre l'image de format ".pbm"
	int sizeImg[2];
 // Taille de l'image
		
	taille (file, sizeImg); 
	posx = (80 - sizeImg[0]) / 2;
 // On stocke la longueur dans posx
	posy = (24 - sizeImg[1]) / 2;
 // On stocke la hauteur dabns posy
	printf ("posx = %d, posy = %d", sizeImg[0], sizeImg[1]);

	affichage (posx, posy, file);

	system ("/bin/stty raw");
 // On passe en mode "raw" pour vider automatiquement le tampon
	while (!touche)
 // Tant qu'aucune touche n'est activée
	{
		touche = getchar();
 // On relève la touche
	}
	
	system ("/bin/stty cooked");
 // On repasse en mode "cooked" = normal
	system ("clear");
 // On renettoie la console
	fclose (file);
 // On ferme le fichier
}
