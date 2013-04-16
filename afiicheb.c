#include "my_lib.h"

void afficheb(double tab[4][2])
{
	int i = 0;
	while (i < 4)
	{
		printf ("%.f  %.f ", tab[i][0], tab[i][1]);
		if (i != 3)
		{
			printf ("/ ");
		}
		i++;
	}
	printf ("\n");
}
