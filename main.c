#include "user.h"
#include<stdio.h>
int main()
{

User u1={1, "CIN1","nom1","prenom1","2/05/1993","Tunis","homme","celebataire","adresse1",5070,"Tunis","observateur","bureau_de_vote1","nom1.prenom1@gmail.com"};
User u2={2, "CIN2","nom2","prenom2","2/08/1993","Tunis","homme","celebataire","adresse1",5070,"Tunis","agent_de_bureau_de_vote","bureau_de_vote2","nom2.prenom2@gmail.com"};
User u2_modifie={2, "CIN2_MODIFIE","nom2_MODIFIE","prenom2_MODIFIE","2/08/1993","Tunis","homme","celebataire","adresse1_MODIFIE",5070,"Tunis","electeur","bureau_de_vote3","nom2.prenom2@gmail.com"};
int i=ajouter(u1,"users.txt");
if(i==1)
{
printf("utilisateur ajouté avec succés \n");
}
else
{
printf("echec d'ajout utilisateur \n");
}

i=ajouter(u2,"users.txt");
if(i==1)
{
printf("utilisateur ajouté avec succés \n");
}
else
{
printf("echec d'ajout utilisateur \n");
}

i=modifier(2,u2_modifie,"users.txt");
if(i==1)
{
printf("utilisateur modifie avec succés \n");
}
else
{
printf("echec de modification utilisateur \n");
}

User u_cherche=chercher(2,"users.txt");

if(u_cherche.id!=-1)
{
 printf("%d %s %s %s %s %s %s %s %s %d %s %s %s %s  \n",u_cherche.id,u_cherche.identifiant,u_cherche.nom,u_cherche.prenom,u_cherche.date_de_naissance,u_cherche.lieu_de_naissance,u_cherche.genre,u_cherche.statut_social,u_cherche.addresse,u_cherche.code_postal,u_cherche.gouvernorat,u_cherche.role,u_cherche.bureau_de_vote,u_cherche.email);
}
else
{
printf("echec de recherche d'utilisateur \n");
}



}
