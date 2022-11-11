#include "point.h"
#include<stdio.h>
int main()
{

list  l={2234," benazine","aziz",21,"tajamo3",2554,6678 } , l2= {1920," kais","saied",68,"takatol",5567,7789 } ;

if (ajouter(l,"point.txt")==1)
printf("ajout valider" );

if (ajouter(l2,"point.txt")==1)
printf("ajout valider" );

list l= chercher(2234,"point.txt");
if(l.id==-1)
printf("inexistant");
else
printf("%d %s %d %d\n",p.id,p.couleur,p.x,p.y);
if ((supprimer(7789,"point.txt")==1 );
printf("suppression valider");
}

