#include "fonction.h"
// On inclut le header
//[]

//----------------------------------------------------------------------------------------------------------------------------------//

void afficher(FILE *file, int x, int y)
// Declaration de la focntion afficher avec comme argument le fichier et la taille de l'image
{
	char ligne[255];
// String dans laquelle on stocke la ligne du fichier qu'on va etudier
	int nbLigne = 0;
// Initialisation du compteur de ligne
	int i;
// Initialisation du compteur des boucles
	int ascii = 88;
// Declaration du code ascii correspondant a "X"

	for(i = 0; i < y; i++){printf("\n");}
// On place l'image en hauteur	

	while (fgets (ligne, 255, file) != NULL)
// Tant que la ligne lue par dans le fichier n'est pas la derniere
	{	
		nbLigne ++;
// On incremente le nombre de ligne lue
		if (nbLigne > 3)
// Si c'est au moins la quatrieme ligne
		{
			for(i = 0; i < x; i++){printf(" ");}
// On se place en longueur
			for(i = 0; i < 255; i++)
// On parcours chaque caractere de la ligne
			{ 
				if (ligne[i] == '1')
// Si c'est un 1
				{
                                	printf(" ");
// On imprime un espace, donc un pixel noir
				}

                               	if (ligne[i] == '0')
// Si c'est un 0
				{
                                	printf("%c", ascii);
// On imprime le caractere correspondant au code ascii de 88, donc le "X"
				}

                        }
  		  	printf("\n");
// On affiche un retour a la ligne
		}
        }
}




//----------------------------------------------------------------------------------------------------------------------------------//





void taille(FILE *file, int* x, int* y)
// Initialisation de la fonction qui va relever la taille avec comme parametre le fichier et les pointeurs de x et y
{
	int i, b, j;
// On initialise les compteurs i, j et b
	int nbLigne = 0;
// On initialise le compteur de ligne
	char ligne[255], tailleX[5], tailleY[5];
// On cree les trois strings pour la ligne lue et les deux string de longueur et de hauteur de la taille

	while (fgets (ligne, 255, file) != NULL)
// Tant que la ligne lue par dans le fichier n'est pas la derniere
	{	
		nbLigne ++;
// On incremente le nombre de ligne

		if (nbLigne == 3)
// Si c'est la troisieme ligne
		{
			for (i = 0; i < 40; i++)
// Tant que i est inferieur a 40 (valeur choisie aleatoirement)
			{			
				if (ligne[i] == ' ')
// Si le caractere lu n'est pas un chiffre
				{
					b = i;
// On sauvegarde la position du caractere lu
					i = 812;
// On casse la boucle
				}
				
				else
// Si c'est un chiffre
				{
					tailleX[i] = ligne[i];
// On stock le chiffre dans la string de la longueur
				}
			
			}
			
			i = 0;
// On reset i
			
			for (j = b + 1; j < 40; j++)
// On repart au premier chiffre du deuxieme nombre
			{
				if (ligne[j] == ' ' || ligne[j] == '\n' || ligne[j] == '\0')
// Si le caractere lu n'est un espace, un retour a la ligne ou un caractere de fin de string
				{
					j = 812;
// On casse la boucle
				}
				
				else
// Sinon, donc si c'est un chiffre
				{
					tailleY[i] = ligne[j];
// On stocke le chiffre dans la string de la hauteur
				}
				
				i++;
// On incremente la position dans la string de hauteur
			
			}
		
		}
	
	}	
	*x = atoi(tailleX);
// On converti la string en int et on modifie a la valeur pointe par *x
	*y = atoi(tailleY);
// Pareil
}




// ----------------------------------------------------------------------------------//




int alea(int MIN,int MAX)
// declaration de la fonction choix avec comme argument le mninmum et le maximum
{
	int random;
// La variable qui depend du choix de l'ecran


	srand(time(NULL));
// Stop le temps
	random = rand() % (MAX-MIN+1) + MIN;
// Choix de la valeur alC)atoire de choixEcran

	return random;
// La fonction renvoie la variable choixEcran
}


// --------------------------------------------------------------------------------//




int menu()

{
	int choix;

	printf("Choisissez le type d'affichage\n1. Affichage basique\n2. Affichage des statistiques\n3. Affichage trier en fonction du screensaver\nVotre choix ?\t");
	scanf("%d", &choix);

	return choix;
}




// -----------------------------------------------------------------------------------//


void statistique(FILE *log)
{
	int nbligne, i, pos;
	float statique = 0;
	float dynamique = 0;
	float interactif = 0;
	float stats, statd, stati;
	char ligne[255];
	char car;

	while (fgets (ligne, 255, log) != NULL)
	{
		nbligne ++;
		pos = 0;
		if(nbligne > 4)
		{
			for(i=0; i<strlen(ligne); i++)
			{
				car = ligne[i];
				if (car == ';'){pos ++;}
				if (pos == 1 && ligne[i+1] == '1'){statique ++;} 
				if (pos == 1 && ligne[i+1] == '2'){dynamique ++;} 
				if (pos == 1 && ligne[i+1] == '3'){interactif ++;}
				if (pos == 1)
				{
					pos = 0;
					i = 3000;
				} 
			} 	
		}		
	}

	nbligne = nbligne - 4;
	
	stats = (statique/nbligne)*100;

	statd = (dynamique/nbligne)*100;

	stati = (interactif/nbligne)*100;

	printf ("Les statistiques sont les suivantes :\nLe screensaver statique à été lancé %f pour cents des fois\nLe screensaver dynamique à été lancé %f pour cents des fois\nLe screensaver interactif à été lancé %f pour cents des fois\n", stats, statd, stati);
}






//--------------------------------------------------------------------------------------------------------------------------------------//



