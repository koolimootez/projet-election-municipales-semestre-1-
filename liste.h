#ifndef LIST_H_INCLUDED
#define LIST_H_INCLUDED

typedef struct
{
char nom_list[20];
int id_candidat;
char nom [20];
char prenom [20];
int age [2];
char orientation [30];
int id_electeur;
int id_list;
//date
int nbvot;

}list;

int ajouter(list p , char filename []);
int modifier(int id, list nouv, char * filename);
int supprimer(int id, char * filename);
list  chercher(int id, char * filename);

#endif // POINT_H_INCLUDED
