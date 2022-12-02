#ifndef ENTITE_H_INCLUDED
#define ENTITE_H_INCLUDED

typedef struct
{
  char identifiant [20];
char nom[20];
char prenom[20];
char date_de_naissance[20];
char lieu_de_naissance[20];
int age;
char genre[20];
char statut_social[50];
char addresse[50];
int code_postal;
char gouvernorat[50];
char email[50];
char role[50];

  int nbvote ; 
  char id-list[20];
}user;

int tri ( char * filename );


int cond_gagnant(char*filename);


#endif

