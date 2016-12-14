#include "statique.h"
// On inclut le header
#define fichier "rsrc/voiture.pbm"
// On cree une valeur globale pour changer l'image a cet endroit seulement
//[]

void main()
// Fonction principale
{
	system("clear");
// On nettoie l'ecran

	pid_t pid;
// On cree une variable pour le PID
	pid = fork();
// On cree le processus fils

	if(pid == 0)
// Si le pid est egale a 0, donc on est dans le processus fils
	{

		int min = 1;

		int max = 5;

		int random = alea(min, max);

		char name[50];

		if(random == 1){sprintf(name, "rsrc/voiture.pbm");}

		if(random == 2){sprintf(name, "rsrc/chateau.pbm");}

		if(random == 3){sprintf(name, "rsrc/escargot.pbm");}

        	if(random == 4){sprintf(name, "rsrc/fuse.pbm");}

	        if(random == 5){sprintf(name, "rsrc/logoexia.pbm");}
	
		FILE *file = fopen(name,"r");
// On ouvre le fichier en lecture seule
		int x, y;
// Declaration de x et y, position de l'image a l'ecran

		FILE *log = fopen("log", "r+");
		fputs(name, log);

		taille(file, &x, &y);
// On appelle la fonction taille avec comme arguments le fichier et les pointeurs de x et y
		fclose(file);
// On ferme le fichier

		file = fopen(name,"r");
// On le rouvre
		afficher(file, x, y);
// On fait appelle a la fonction afficher avec comme argument le fichier et la taille de l'image

		fclose(file);
// On ferme le fichier
	}

	else
	{
		system("/bin/stty raw");
// On passe le system en mode "raw" afin de vider le tampon automatiquement
	
		while(!getchar()){}
// Tant qu'aucune touche n'est actionnee (creation d'une boucle infinie)

		system("/bin/stty cooked");
// On repasse le systeme en mode "cooked", le mode normal donc
		system("clear");
// On renettoie l'ecran
		wait(NULL);
// On fait attendre le processus pere
	}
}
