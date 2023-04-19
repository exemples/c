#include <stdio.h>
#include<stdlib.h>
#include<string.h>

#define NBRPAYS 2
#define NBRVILLES 2

int main(){       
    typedef struct ville
    {
      char names[20];
      char code[3];
      int nbr_habitants;
    } ville;
    
    typedef struct pays
    {
      char names[20];
      char code[3];
      ville villes[2];
    } pays;

    pays payes[NBRPAYS];

    int i,j;
    // Saisie des informations des pays 
    for (i = 0; i < NBRPAYS; i++)
    {
        printf("Entrer nom du pays %d " , i + 1);
        scanf("%s" , payes[i].names);
        printf("Entrer code du pays %d " , i + 1);
        scanf("%s" , payes[i].code);

        for (j = 0; j < NBRVILLES; j++){
          printf("Entrer nom de la ville %d " , j + 1);
          scanf("%s" , payes[i].villes[j].names);
          printf("Entrer code de la ville %d " , j + 1);
          scanf("%s" , payes[i].villes[j].code);
          printf("Entrer le nombre d'habitants");
          scanf("%d" , &payes[i].villes[j].nbr_habitants);
        }
        
    }
     system("cls");
    // Affichage des pays saisis
     printf(" \n ******************************************  \n");
    for (i = 0; i < NBRPAYS; i++)
    {
        printf("\tnom du pays %d : %s \n" , i + 1 , payes[i].names);
        printf("\tcode du pays %d : %s \n" , i + 1 , payes[i].code);

        for (j = 0; j < NBRPAYS; j++){
          printf("\tLa ville %d : %s  \n \n" , j + 1 , payes[i].villes[j].names);
          printf("\tcode de la ville %d : %s  \n \n" , j + 1 , payes[i].villes[j].code);
          printf("\tNombre d'habitants : %d  \n \n" , payes[i].villes[j].nbr_habitants);
        }
        
    }
     printf("**********************************************");

    // Recherche d'un pays à partir de son code
    char codeUser[3];
   printf("saisir le code du pays ");
   scanf("%s" , codeUser );
   int indice = -1 ;
   for (int i = 0; i < NBRPAYS; i++){
     if (strcmp(payes[i].code , codeUser) == 0) indice = i ;
   }
        printf("\n\n");
  
        if (indice != -1){
          
          printf(" \tpays : %s \n\n" , payes[indice].names);
          printf(" \tcode du pays %s : \n\n" , payes[indice].code);
  
          for (int j = 0; j < NBRPAYS; j++){
            printf("\tLa ville : %s  \n \n" , payes[indice].villes[j].names);
            printf("\tcode de la ville : %s  \n \n" , payes[indice].villes[j].code);
          }
        } else{
            printf("Code pays non trouvé !")
        }
}

