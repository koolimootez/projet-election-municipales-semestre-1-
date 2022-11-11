#include "point.h"
#include<stdio.h>
int ajouter(liste l , int id-candidat , char nom, char prenom, int  age , char orientation, int id-electeur,int id-list ,char filename [])
{
    FILE * f=fopen(filename, "a");
    if(f!=NULL)
    {
        fprintf(f,"%d %s %s %d %s  %d %d\n",l.id-candidat , l.nom, l.prenom, l.age , l.orientation, l.id-electeur,l.id-list);
        printf ("la date est :%d",d->jour,"%d",d->mois,"%d",d->an);
        fclose(f);
        return 1;
    }
    else return 0;
} 

int modifier( liste  nouv,int id-candidat , char nom, char prenom, int  age , char orientation, int id-electeur,int id-list , char * filename)
{
liste l;
    FILE * f=fopen(filename, "r");
    FILE * f2 =fopen("aux.txt", "w");
    if(f==NULL || f2==NULL)
return 0;
else
    {
while(fscanf(f,"%d %s %s %d %s  %d %d\n",&l.id-candidat , l.nom, l.prenom, &l.age , l.orientation, &l.id-electeur,&l.id-list)!=EOF)
{
if(l.id-list!=nouv.id-list)
           
        fprintf(f,"%d %s %s %d %s  %d %d\n",l.id-candidat , l.nom, l.prenom, l.age , l.orientation, l.id-electeur,l.id-list);
else
         
  fprintf(f,"%d %s %s %d %s  %d %d\n",nouv.id-candidat , nouv.nom, nouv.prenom, nouv.age , nouv.orientation, nouv.id-electeur,nouv.id-list);

}
        fclose(f);
        fclose(f2);
remove(filename);
rename("aux.txt", filename);
        return 1;
    }
  
}

int supprimer(int id-list, char * filename)
{
liste l;
    FILE * f=fopen(filename, "r");
    FILE * f2 =fopen("aux.txt", "w");
    if(f==NULL || f2==NULL)
return 0;
else
    {
while(fscanf(f," %d\n",&l.id-list)!=EOF)
{
if(l.id-list!=id-list)
        fprintf(f2," %d\n",l.id-list);
}
        fclose(f);
        fclose(f2);
remove(filename);
rename("aux.txt", filename);
        return 1;
    }
}



Point chercher(int id-list, char * filename)
{
list l; int tr=0;
    FILE * f=fopen(filename, "r");
 if(f!=NULL )
    {
while(fscanf(f,"   %d   ",&l.id-list)!=EOF && tr==0)
{if(id=l.id-list)
tr=1;
}
}
if(tr==0)
l.id-list=-1;
return p;

}


int afficher(list l ,char nom,  char prenom,  int age,  char orientation,   char filename [])
{
    FILE * f=fopen(filename, "a");
    if(f!=NULL)
    {
        fprintf(f," %s %s %d %s\n", l.nom, l.prenom, l.age , l.orientation);
        fclose(f);
        return 1;
    }
    else return 0;
} 



