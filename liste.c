#include "liste.h"
#include<stdio.h>
int ajouter(list l ,char filename [])
{
    FILE * f=fopen(filename, "a");
    if(f!=NULL)
    {
        fprintf(f,"%d %s %s %s %d %s  %d %d %d\n",l.id-candidat , l.nom,l.nom_list, l.prenom, l.age , l.orientation, l.id_electeur,
        l.id_list ,l.nbvot);
        printf ("la date est :%d",d->jour,"%d",d->mois,"%d",d->an);
        fclose(f);
        return 1;
    }
    else return 0;
} 

int modifier( list  nouv , char * filename)
{
liste l;
    FILE * f=fopen(filename, "r");
    FILE * f2 =fopen("aux.txt", "w");
    if(f==NULL || f2==NULL)
return 0;
else
    {
while(fscanf(f,"%d %s %s %s %d %s  %d %d %d\n",&l.id_candidat , l.nom,l.nom_list, l.prenom, &l.age , l.orientation, &l.id_electeur,
        &l.id_list ,&l.nbvot)!=EOF)
{
if(l.id_list!=nouv.id_list)
           
        fprintf(f,"%d %s %s %s %d %s  %d %d %d\n",l.id_candidat , l.nom,l.nom_list, l.prenom, l.age , l.orientation, l.id_electeur,
        l.id_list ,l.nbvot);
else
         
  fprintf(f,"%d %s %s %s %d %s  %d %d %d\n",nouv.id_candidat , nouv.nom, nouv.nom_list, nouv.prenom, nouv.age , nouv.orientation, 
   nouv.id_electeur,  nouv.id_list ,nouv.nbvot);
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
while(fscanf(f," %d\n",&l.id_list)!=EOF)
{
if(l.id_list!=id_list)
        fprintf(f2," %d\n",l.id_list);
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






