#include "user.h"
#include<stdio.h>

int ajouter(User u, char filename [])
{
    FILE * f=fopen(filename, "a");
    if(f!=NULL)
    {
        fprintf(f,"%d %s %s %s %s %s %s %s %s %d %s %s  \n",u.id,u.identifiant,u.nom,u.prenom,u.date_de_naissance,u.lieu_de_naissance,u.genre,u.statut_social,u.addresse,u.code_postal,u.gouvernorat,u.email);
        fclose(f);
        return 1;
    }
    else return 0;
}

int modifier(int id, User nouv,  char filename [])
{
    User u;
    FILE * f=fopen(filename, "r");
    FILE * f2 =fopen("aux.txt", "w");
    if(f==NULL || f2==NULL)
	{
		return 0;
	}
    else
    	{
		while(fscanf(f,"%d %s %s %s %s %s %s %s %s %d %s %s",&u.id,u.identifiant,u.nom,u.prenom,u.date_de_naissance,u.lieu_de_naissance,u.genre,u.statut_social,u.addresse,&u.code_postal,u.gouvernorat,u.email)!= EOF)
		{
			if(u.id!=id)
				{
        				 fprintf(f2,"%d %s %s %s %s %s %s %s %s %d %s %s  \n",u.id,u.identifiant,u.nom,u.prenom,u.date_de_naissance,u.lieu_de_naissance,u.genre,u.statut_social,u.addresse,u.code_postal,u.gouvernorat,u.email);
				}
			else
				{
					 fprintf(f2,"%d %s %s %s %s %s %s %s %s %d %s %s  \n",nouv.id,nouv.identifiant,nouv.nom,nouv.prenom,nouv.date_de_naissance,nouv.lieu_de_naissance,nouv.genre,nouv.statut_social,nouv.addresse,nouv.code_postal,nouv.gouvernorat,nouv.email);
				}

		}
       	        fclose(f);
        	fclose(f2);
		remove(filename);
		rename("aux.txt", filename);
       		 return 1;
	}
  
}

int supprimer(int id,  char filename [])
{
    User u;
    FILE * f=fopen(filename, "r");
    FILE * f2 =fopen("aux.txt", "w");
    if(f==NULL || f2==NULL)
	{
		return 0;
	}
    else
    	{
		while(fscanf(f,"%d %s %s %s %s %s %s %s %s %d %s %s",&u.id,u.identifiant,u.nom,u.prenom,u.date_de_naissance,u.lieu_de_naissance,u.genre,u.statut_social,u.addresse,&u.code_postal,u.gouvernorat,u.email)!= EOF)
		{
			if(u.id!=id)
				{
        				 fprintf(f2,"%d %s %s %s %s %s %s %s %s %d %s %s  \n",u.id,u.identifiant,u.nom,u.prenom,u.date_de_naissance,u.lieu_de_naissance,u.genre,u.statut_social,u.addresse,u.code_postal,u.gouvernorat,u.email);
				}
		}
       	        fclose(f);
        	fclose(f2);
		remove(filename);
		rename("aux.txt", filename);
       		 return 1;
	}
  
}

User chercher(int id,  char filename [])
{
    User u;
    int trouver=0;
    FILE * f=fopen(filename, "r");
 	if(f!=NULL )
    	{

		while(trouver == 0 && 
fscanf(f,"%d %s %s %s %s %s %s %s %s %d %s %s",&u.id,u.identifiant,u.nom,u.prenom,u.date_de_naissance,u.lieu_de_naissance,u.genre,u.statut_social,u.addresse,&u.code_postal,u.gouvernorat,u.email)!= EOF)
			{
				if(id==u.id)
				{
				trouver=1;
				}
			}
 		fclose(f);
   	}
	if(trouver==0)
	{
	u.id=-1;
	}
	return u;

}
