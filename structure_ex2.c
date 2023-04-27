//exercice 2
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void saisie();
void affichage();
void affichage_liste_noir();
void produit_Timberland ();
typedef struct produit {
  char code[5];
  char marque[50];
  int taille;
  char couleur[10];
  float prix;
} Produit;

Produit liste_produits[4];
void saisie(){
	int i;
	for(i=0;i<4;i++){
    	printf("entrer le code :");
    	scanf("%s",liste_produits[i].code);
    	printf("entrer la marque:");
    	scanf("%s",liste_produits[i].marque);
    	printf("entrer la taille:");
    	scanf("%d",&liste_produits[i].taille);
    	printf("entrer la couleur:");
    	scanf("%s",liste_produits[i].couleur);
    	printf("entrer le prix de votre produit:");
    	scanf("%f",&liste_produits[i].prix);
	}	
}
void affichage(){
	int i;
	printf("Voici la liste de votre produits:\n");
	for(i=0;i<4;i++){
		printf("Produit %d\n",i+1);
		printf("Code:%s\n",liste_produits[i].code);
		printf("Marque:%s\n",liste_produits[i].marque);
		printf("Taille:%d\n",liste_produits[i].taille);
		printf("Couleur:%s\n",liste_produits[i].couleur);
		printf("Prix:%.2f\n",liste_produits[i].prix);
	}
}
void affichage_liste_noir(){
	int i;
    printf("Liste des produits noirs :\n");
    for (i=0;i<4;i++){
        if (strcmp(liste_produits[i].couleur,"noir")==0){
            printf("Produit%d:\n", i+1);
            printf("Code:%s\n",liste_produits[i].code);
            printf("Marque:%s\n",liste_produits[i].marque);
            printf("Taille:%d\n",liste_produits[i].taille);
            printf("Couleur:%s\n",liste_produits[i].couleur);
            printf("Prix:%.2f\n",liste_produits[i].prix);
        }
	}
}
void produit_Timberland (){
	int i;
	printf("Liste des produits dont la marque est Timberland :\n");
    for (i= 0;i<4;i++) {
        if (strcmp(liste_produits[i].marque,"Timberland")==0){
            printf("Produit%d:\n", i+1);
            printf("Code:%s\n",liste_produits[i].code);
            printf("Marque:%s\n",liste_produits[i].marque);
            printf("Taille:%d\n",liste_produits[i].taille);
            printf("Couleur:%s\n",liste_produits[i].couleur);
            printf("Prix:%.2f\n",liste_produits[i].prix);
        }
	}
}
int main(){
	saisie();
	affichage();
	affichage_liste_noir();
  produit_Timberland ();
}
