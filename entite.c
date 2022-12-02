#include <stdio.h>

int transfer(list.txt, int tab , char list, int n)
{
nb=0;

fopen(f);
while (fscanf (f,"%d %s",&nbvote,nom-list)!=EOF)
{

  for (int i=0; i<n ; i++)
    {
      nb++ ;
      if (nb<=n)
        {
          tab[i]=nbvote;
        }
    }

   for (int j=0; j<n ; j++)
     {
       nb++ ;
       if (nb<=n)
         {
           list[j]=nom-list;
         }

     }

}
fclose(f)
}

int tri (int id, int nbvote)
{
   for (i=0;i<tab.length-1;i++)
   {
       int m =tab[i];
       int pos = i;
   for (int h = i+1 ; h < tab.length-1; i++){
      if (tab[h]> m )
       {
        m= tab[h];
        pos=h;
       }
    }
               
   
    if (m!= tab[i])
      {

        int aux =tab[i];
        tab[i]= tab[pos];
        tab[pos]=aux;

       char aux2 = list[i];
       list[i] = list [pos];
       list[pos]= aux2;
      }

for (int i = 0 ; i<tab.length ; i++ ) {
  printf("%d ",&tab[i]);
  printf("%s",list[i])
}

}


char file ()
{
fopen(f); 

for (int j=0;j<n ;j++)
{
  fprintf(f,list[j]);
}
 
fclose(f);

}




/////////////////////




int cond_gagnat()
{
 user u;
 int r[100];
 int z=0;
 FILE *f;
 f= ("user.txt","a+");
 f = fopen(fscanf (f,"%s %s %s %s %s %d %s %s %s %d   %s %s %s \n",u.id,u.nom ,u.prenom,u.date_naissance,u.lieu_naissance,
      &u.age, u.genre, u.statut_social,u.adresse,&u.code_postal, u.gouvernorat,u.email,u.role)!=EOF)

 {
r[z]=u.vote;
z++;
}

int maxcount = 0;
int gagnant;
for (int i =0 ; i<z ; i++)
{
  int count=0;
  for (int j=0; j <n ; j++)
   {
     if (r[i]==r[j])
       count++;

   }
  if (count > maxcount)
   {
     maxcount=count;
     gagnant=r[i];
   }
return gagnant;
}
///////////////////

