#include "statique.h"
//[]

void main()
{
	system ("clear"); // Nettoie la console	

	int i = 88; // Code ascii du X
	int j, posx, posy; // j = Compteur de la deuxième boucle, posx et poy = coordonnées de l'image
	int lap = 0; // Variable qui arrète les retours à la ligne 
	int nbligne = 0; // Compteur de ligne du fichier
	char ligne[255]; // String où on stocke la ligne du fichier
	char touche; // UTILE ?
	FILE *file = fopen ("voiture.pbm","r"); // On ouvre l'image de format ".pbm"
	int sizeImg[2]; // Taille de l'image
	
	while (fgets (ligne, 255, file)!= NULL) // Tant que la ligne du fichier lue n'est pas la dernière
	{
		
		if (nbligne == 3) // Si c'est la troisième ligne
		{
			sizeImg[lap] = taille(ligne, lap); // On appelle la fonction taille pour la longueur de l'image
			posx = (178 - sizeImg[0]) / 2; // On stocke la longueur dans posx
			lap ++; // On incrémente lap pour changer de place dans le tableau sizeImg
			sizeImg[lap] = taille(ligne, lap); // Pareil pour la hauteur
			posy = (54 - sizeImg[1]) / 2; // On stocke la hauteur dabns posy
			lap = 0; // On reset lap pour la suite
		}		
			
		if (nbligne >3) // Si on a dépassé la troisième ligne, donc on est dans l'image en soi
		{
		goTo(posx, posy, lap); // On appelle la fonction goTo pour placer l'image
			for (j=0; j<255; j++) // On parcourt chaque caractère de la ligne
			{
				if (ligne[j] == '0') // Si c'est un 0
				{
					printf("%c", i); // On affiche en char le code ascii rentré dans i. Donc on affiche un X
					lap = 1; // On interrompt les \n consécutifs
				}
			
				if (ligne[j] == '1') // Si c'est un 1
				{
					printf (" "); // On affiche un espace, donc un pixel noir
				}
			}
		}
	nbligne ++; // On incrémente le compteur de ligne
	}
	
	printf("\n"); // On affiche un retour à la ligne

	system ("/bin/stty raw"); // On passe en mode "raw" pour vider automatiquement le tampon
	while (!touche) // Tant qu'aucune touche n'est activée
	{
		touche = getchar(); // On relève la touche
	}
	
	system ("/bin/stty cooked"); // On repasse en mode "cooked" = normal
	system ("clear"); // On renettoie la console
	fclose (file); // On ferme le fichier
}
