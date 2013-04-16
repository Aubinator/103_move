#include "my_lib.h"

void mult(double tab[4][2], double matrix[2][2])
{
	int i = 0;
	while (i < 4)
	{
		tab[i][0] = matrix[0][0] * tab[i][0] + matrix[0][1] * tab[i][1];
		tab[i][1] = matrix[1][0] * tab[i][1] + matrix[1][1] * tab[i][0];
		i++;
	}
}
