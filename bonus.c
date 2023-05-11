#include <stdio.h>
int main()
 {
 int T[10] = { 0,0,0,0,0,0,0,0,0,0};
 int max=0;
 int indice_max = -1 ; 
   // Initialiser max avec une valeur négative
  for (int i = 0; i < 10; i++) {
    if (T[i]<0){
      max = T[i];
      indice_max = i;      
    }
  }
   if(max != 0){
      for (int i = 0; i < 10; i++) 
     {                                               
       if (T[i] < 0 && T[i] > max)
         {                                               
           max = T[i];
           indice_max = i;
         }
      }
      printf("Le plus grand élément  negative du tableau T est %d, à l'indice %d.", max, indice_max);
   }else printf("on n'a pas les nombre negatif");

}
