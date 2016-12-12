#include "statique.h"
//[]

void affichage (int posx, int posy, FILE *file)
 // Affichage d'une image
{
	int a, j;
 // On déclare a, compteur de la boucle de longueur et j, 2 ème boucle de la récursive
	int i = 88;
 // Code ascii du X
	int nbligne = 10;
 // Compteur de ligne du fichier
	char ligne[255];
 // String où on stocke la ligne du fichier

	for (j=0; j<posy; j++){printf("\n");}
 // Nous place au bon cacactère

        while (fgets (ligne, 255, file)!= NULL)
 // Tant que la ligne du fichier lue n'est pas la dernière
        {
                if (nbligne >3)
 // Si on a dépassé la troisième ligne, donc on est dans l'image en soi
                {
			for (a=0; a < posx; a++){printf (" ");}
 // On imprime un espace tant qu' n est pas au caractère demandé

                        for (j=0; j<posx; j++)
 // On parcourt chaque caractère de la ligne
                        {
                                if (ligne[j] == '0')
 // Si c'est un 0
                                {
                                        printf("%c", i);
 // On affiche en char le code ascii rentré dans i. Donc on affiche un X
                                }

                                if (ligne[j] == '1')
 // Si c'est un 1
                                {
                                        printf (" ");
 // On affiche un espace, donc un pixel noir
                                }
                        }
                }

	        printf("\n");
 // On affiche un retour à la ligne		
        }
}






//------------------------------------------------------------------------------------//






void taille (FILE *file, int *sizeImg)
 // Fonction qui relève la taille donnée dans le fichier, ne renvoie rien puisque les tableaux marchent comme des pointeurs, prends le doc et le tableau en argument
{
	char taillex[5];
 // String de la longueur
	char tailley[5];
 // String de la hauteur
	char ligne[255];
	int i, j, x, y, nbligne;
 /* Déclaration de 4 entiers:
i est le compteur pour la boucle de la longueur
j est le compteur de la boucle de la hauteur
x et la longueur
y est la hauteur */

        while (fgets (ligne, 255, file)!= NULL)
 // Tant que la ligne du fichier lue n'est pas la dernière
        {
		nbligne ++;

                if (nbligne == 3)
 // Si c'est la troisième ligne
                {
              	
			for (i=0; i<50; i++)
 // Tant que i vaut moins que 50 (valeur un peu aléatoire)
			{	
				if (ligne[i] == ' ')
 // Si le caractère n'est pas un chiffre
				{	
					x = i;
 // On sauvegarde la valeur de i
					i = 143;
 // On casse la boucle
				}
		
				else
 // Sinon (si c'est un chiffre)
				{
					taillex[i] = ligne[i];
 // On stocke le chiffre dans la string de la longueur
				}
			}
		}

			i = 0;
 // On reset i
	
			for (j = x + 1; j<50; j++)
 // Tant que j est inférieur à 50 (là aussi c'est du random)
			{	
				if (ligne[j] == ' ' || ligne[j] == '\0' || ligne[j] == '\n')
 // Si le caractère n'est pas un chiffre
				{
					j = 143;
 // On casse la boucle
				}
		
				else
 // Sinon (si c'est un chiffre)
				{
					tailley[i] = ligne[j];
 // On stocke le chiffre dans la string de la hauteur
				}
		
				i ++;
 // On incrémente i, qui est ici la position dans la string de la hauteur
			}
	
			x = atoi(taillex);
 // On converti en int la string de la longueur et on la stock dans x
			y = atoi(tailley);
 // Pareil pour la string de la hauteur et on la stock dans y

			sizeImg[0] = x;
 // On met la longueur en 1ère position...
			sizeImg[1] = y;
 // ... et la hauteur en 2ème
			fclose (file);
	}
}
