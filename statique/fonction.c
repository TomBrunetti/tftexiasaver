#include "statique.h"
//[]

void goTo(int x, int y, int lap) // Fonction qui place l'image, ne retourne rien mais prends des coordonnées et "l'activateur" en entrée
{
	int a, b; // On déclare a et b

	if (lap == 0) // tant que lap, donc l'activateur, est vérifié
	{	
		for (b=0; b < y; b++) // tant qu'on n'est pas à la ligne demandé en argument
		{
			printf("\n"); // On met un retour à la ligne
		}
	}
	
	else
	{
		printf ("\n"); // sinon on met un retour à la ligne
	}

/* Ok j'avoue que le truc au dessus est pas très clair
 * même moi je comprends pas bien donc pour l'instant sa marche
 * mais je modiefierais plus tard donc faites y pas trop attention
 */
	
	for (a=0; a < x; a++) // Tant qu'on est pas au caractère demandé
	{
		printf (" "); // On imprime un espace
	}
}

void taille (char *ligne, int *sizeImg) // Fonction qui relève la taille donnée dans le fichier, ne renvoie rien puisque les tableaux marchent comme des pointeurs, prends la ligne du doc et le tableau en argument
{
	char taillex[5]; // String de la longueur
	char tailley[5]; // String de la hauteur
	int i, j, x, y; /* Déclaration de 4 entiers:
i est le compteur pour la boucle de la longueur
j est le compteur de la boucle de la hauteur
x et la longueur
y est la hauteur */
	for (i=0; i<50; i++) // Tant que i vaut moins que 50 (valeur un peu aléatoire)
	{	
		if (ligne[i] == ' ') // Si le caractère n'est pas un chiffre
		{
			x = i; // On sauvegarde la valeur de i
			i = 143; // On casse la boucle
		}
		
		else // Sinon (si c'est un chiffre)
		{
			taillex[i] = ligne[i]; // On stocke le chiffre dans la string de la longueur
		}
	}

	i = 0; // On reset i
	
	for (j = x + 1; j<50; j++) // Tant que j est inférieur à 50 (là aussi c'est du random)
	{	
		if (ligne[j] == ' ' || ligne[j] == '\0' || ligne[j] == '\n') // Si le caractère n'est pas un chiffre
		{
			j = 143; // On casse la boucle
		}
		
		else // Sinon (si c'est un chiffre)
		{
			tailley[i] = ligne[j]; // On stocke le chiffre dans la string de la hauteur
		}
		
	i ++; // On incrémente i, qui est ici la position dans la string de la hauteur
	}
	
	x = atoi(taillex); // On converti en int la string de la longueur et on la stock dans x
	y = atoi(tailley); // Pareil pour la string de la hauteur et on la stock dans y

	sizeImg[0] = x; // On met la longueur en 1ère position...
	sizeImg[1] = y; // ... et la hauteur en 2ème
}
