#include "my_lib.h"

int add_matrix (double tab[4][2],int a, int b)
{
  int i = 0, j = 0;
  while (i < 4)
    {
      j = 0;
      tab[i][j] = tab[i][j] + a;
      j++;
      tab[i][j] = tab[i][j] + b;
      i++;
    }
  return (0);
}
