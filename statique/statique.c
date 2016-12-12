#include "statique.h"
#define fichier "voiture.pbm"

int main(int argc, char *argv[])

{
system("clear");

FILE *file = fopen(fichier, "r");
int x, y;

taille(file, &x, &y);
fclose(file);

file = fopen(fichier, "r");
afficher(file, x, y);
system("/bin/stty raw");

while(!getchar())
{printf("");

}

system("/bin/stty cooked");

system ("clear");

fclose(file);

return 0;

}
