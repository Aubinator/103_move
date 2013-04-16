#include "my_lib.h"

void verif(int ac, char **av)
{
	int n_ac = 1, cmpt = 1;

	while (cmpt < ac)
	{
		if (av[cmpt][0] == 'T')
		{
			n_ac +=3;
		}
		if (av[cmpt][0] == 'H')
		{
			n_ac +=3;
		}
		if (av[cmpt][0] == 'S')
		{
			n_ac +=2;
		}
		if (av[cmpt][0] == 'R')
		{
			n_ac +=2;
		}
		cmpt++;
	}
	if (n_ac != ac)
	{
		printf("entrer la synthaxe convenable: Option valeur \n");
		exit (-1);	
	}
	else {

		printf ("\n");

	}
}
