#include <stdio.h>
#include <stdlib.h>

int addition(int nb1,int nb2)
{
    return nb1 + nb2;
}
 int main()
 {
     int nb1,nb2;
     printf("Choisissez le 1er nombre \n");
     scanf("%d",&nb1);
     printf("Choisissez le 2eme nombre \n");
     scanf("%d",&nb2);
     int resultat = addition(nb1,nb2);
     printf(" 1er nombre + 2eme nombre = %d\n", resultat);
     return 0;
 }
