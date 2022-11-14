#ifndef USER_H_INCLUDED
#define USER_H_INCLUDED

typedef struct 
{
int id;
char identifiant [20];
char nom[20];
char prenom[20];
char date_de_naissance[20];
char lieu_de_naissance[20];
char genre[20];
char statut_social[50];
char addresse[50];
int code_postal;
char gouvernorat[50];
char email[50];

}User;


int ajouter(User u, char filename []);
int modifier(int id,User nouv, char * filename);
int supprimer(int id, char * filename);
User chercher(int id, char * filename);

#endif
