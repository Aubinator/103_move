#ifndef __MY_H__
# define __MY_H__

#include "stdio.h"
#include "math.h"
#include "stdlib.h"
int add_matrix (double tab[4][2],int a, int b);
void homo (double tab[4][2], int a, int b);
void mult (double tab[4][2], double matrix[2][2]);
void verif (int ac, char **av);
void affiche(double tab[4][2]);
void afficheb(double tab[4][2]);

#endif
