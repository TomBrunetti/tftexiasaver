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
		time_t sec;
// On initialise sec, qui releve le nombre de secondes ecoulees depuis janvier 1970

	        struct tm temps;
// On cree une structure de type tm qui correspond a la date

		char infolog[255];
// On cree la chaine de caractere qui va s'imprimer dans le fichier log

		int min = 1;
// Minimum que peux prendre la variable min, qui va servir a choisir l'image lancee

		int max = 5;
// Pareil pour le maximum

		int random = alea(min, max);
// On prend un chiffre aleatoire entre min et max inclus, definis plus haut

		char name[50];
// On cree la chaine de caractere qui contiendra le nom de l'image

		if(random == 1){sprintf(name, "rsrc/voiture.pbm");}
// Si random vaut un, l'image est la voiture

		if(random == 2){sprintf(name, "rsrc/chateau.pbm");}
// Si random vaut 2, l'image est le chateau

		if(random == 3){sprintf(name, "rsrc/escargot.pbm");}
// Si random vaut 3, l'image est l'escargot

        	if(random == 4){sprintf(name, "rsrc/fuse.pbm");}
// Si random vaut 4, l'image est le fusee

	        if(random == 5){sprintf(name, "rsrc/logoexia.pbm");}
// Si random vaut 5, l'image est le loge exia	

		FILE *file = fopen(name,"r");
// On ouvre l'image en lecture seule
		int x, y;
// Declaration de x et y, position de l'image a l'ecran

		FILE *log = fopen("log", "a+");
// On ouvre le fichier log en mode ajout +
		time(&sec);
// On releve le temps
                temps = *localtime(&sec);
// On remplit la structure temporelle

		random = 1;

                sprintf(infolog, "%d/%d/%d %d:%d:%d;%d;%s\n",temps.tm_mday + 1, temps.tm_mon + 1, temps.tm_year, temps.tm_hour, temps.tm_min, temps.tm_sec, random, name);
// On remplit la chaine de caractere infolog comme suit : jj/mm/yyyy HH:mm:ss;1;nom de l'image lancee

		fputs(infolog, log);
// On met infolog a la fin du fichier log

		taille(file, &x, &y);
// On appelle la fonction taille avec comme arguments le fichier et les pointeurs de x et y
		fclose(file);
// On ferme le fichier

		file = fopen(name,"r");
// On le rouvre

		x = (178 - x) / 2;
// Calcul du centre de l'ecran en longueur en fonction de la taille de l'image
		y = (54 - y) / 2;
// Pareil pour y

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
