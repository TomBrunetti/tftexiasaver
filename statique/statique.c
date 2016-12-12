#include "statique.h"

int main(int argc, char *argv[])

{
system("clear");

FILE *file = fopen("voiture.pbm", "r");
int x, y;

taille(file, &x, &y);
fclose(file);

file = fopen("voiture.pbm", "r");
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
