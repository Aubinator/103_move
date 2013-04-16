#include "my_lib.h"

void homo (double tab[4][2], int a, int b) 
{

	int i = 0;
	while (i < 4) 
	  {
	    
	    tab[i][0] *= a;
	    tab[i][1] *= b;
	    i++;
	  }
}
