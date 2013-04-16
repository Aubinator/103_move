103_move
========

transformations matricielle on C langage.


On applique différentes transformations du plan à une série de points.
Pour simplifier les calculs, on utilise le système de coordonnées homogènes.
On exprime les transformations successives sous la forme matricielle, on ef-fectue ensuite le produit de ces différentes matrices. La matrice résultat est
apliquée aux différents points. On affiche à l’écran les coordonnées dans le
plan des points transformés.
3 Le sujet
Les transformations à prendre en compte sont (dans un repère Oxy) : la
translation, l’homothétie de centre O, la rotation de centre O, la symétrie
par rapport à un axe passant par O. La syntaxe de la commande donnée au
logiciel est la suivante :
Transformation Syntaxe Exemple
Translation de vecteur (i,j) T i j T 1 -1
Homothétie de rapports i suivant Ox et j suivant Oy H i j H -1 2
Rotation d’angle i (en degrés) R i R 90
Symétrie par rapport à un axe incliné de i degrés S i S 45
Pour simplifier le décodage de la commande, les paramètres i et j seront des
entiers (les calculs sont à effectuer et les résultats sont en nombres à virgule
flottante). On peut appliquer plusieurs transformations successivement. Par
exemple, une translation de vecteur (1,-1), suivie d’une rotation d’angle 180˚
s’écrira :
T 1 -1 R 180
Les points auxquels on applique la transformation résultat sont les qautre
points suivants :
A(1; 1) B(¡1; 1) C(¡1; ¡1) D(1; ¡1)
1
4 Le logiciel
Répertoire de rendu :
˜
/rendu/math/103move
Le répertoire
˜
/ en 711. Ce répertoire surtout pas en 710.
Le répertoire rendu en 710.
Les répertoires en 750, les fichiers en 640.
Nom de l’exécutable : 103move
Exemple de lancer :
> 103move T 0 0 H 1 1 R 360 S 45
En entrée : les transformations et leurs paramètres.
En sortie : Une description des transformations appliquées et les coordonnées
des points résultats (voir exemple).
5 Exemple
Voici les sorties obtenues pour différentes commandes :
> 103move T 0 0
Translation de vecteur (0,0)
1 1 / -1 1 / -1 -1 / 1 -1
> 103move H 1 1
Homothétie de rapports 1 et 1
1 1 / -1 1 / -1 -1 / 1 -1
> 103move T -2 -2 H -1 -1
Translation de vecteur (-2,-2)
Homothétie de rapports -1 et -1
1 1 / 3 1 / 3 3 / 1 3
> 103move R 180 S 45
Rotation d’angle 180˚
Symétrie par rapport à l’axe incliné de 45˚
-1 -1 / -1 1 / 1 1 / 1 -1
> 103move R 274
Rotation d’angle 274˚
1,067 -0,9278 / 0,9278 1,067 / -1,067 0,9278 / -0,9278 -1,067
> 103move T -2 -2 H -1 -1 R 180 S 225
Translation de vecteur (-2,-2)
Homothétie de rapports -1 et -1
Rotation d’angle 180˚
2
Symétrie par rapport à l’axe incliné de 225˚
-1 -1 / -1 -3 / -3 -3 / -3 -1
6 Le code
Votre code sera examiné. Les codes bien structurés, commentés et lisibles
seront appréciés.
Un bonus de 3 points sera attribué si vous programmez le calcul par coor-données homogènes (multiplications matricielles).
