#include<math.h>
#include"my_lib.h"
int main(int ac, char *av[])
{
  verif(ac, av);
  int i =  1; 
  int a , b;
  double  PI = 3.141592654; 
  double  tab[4][2];
  double tmp[2][2], tp;
  tab[0][0] = 1;
  tab[0][1] = 1;
  tab[1][0] = -1;
  tab[1][1] = 1;
  tab[2][0] = -1;
  tab[2][1] = -1;
  tab[3][0] = 1;
  tab[3][1] = -1;
  
  while (i < ac)
    {
      if (av[i][0] == 'T') 
	{
	  
	  a = atoi (av[i+1]);
	  b = atoi (av[i+2]);
	  printf("Translation de vecteur (%d, %d)\n",a,b);
	  add_matrix (tab, a, b);
	  i +=3;
	  afficheb(tab);

	}
      else if (av[i][0] == 'H')
	{
	  
	  a = atoi (av[i+1]);
	  b = atoi (av[i+2]);
	  printf("Homothetie des rapports %d et %d\n", a, b);
	  homo (tab, a, b);
	  i+=3;
	  afficheb(tab);

	}
      else if (av[i][0] == 'R')
	{
	  tp = atoi (av[i+1]);
	  printf ("Rotation de l'angle %f\n",tp);
	  tp = (tp * PI)/ 180;
	  tmp[0][0] = cos (tp) ;
	  tmp[0][1] = - sin (tp);
	  tmp[1][0] = sin (tp);
	  tmp[1][1] = cos (tp);
	  mult(tab, tmp);
	  i+=2;
	  affiche(tab);

	}
      else if (av[i][0] == 'S')
	{
	  tp = atoi (av[i+1]);
	  tp = (tp * PI)/ 180;
	  tmp[0][0] = cos (2*tp);
			tmp[0][1] = sin (2*tp);
			tmp[1][0] = sin (2*tp);
			tmp[1][1] = -cos (2*tp);
			printf("Symetrie par  rapports  l'axe inclinee de %f\n",tp);
			mult(tab, tmp);
			i+=2;
			affiche(tab);

	}
    
    }

    
  return 0;
}
