#include <stdio.h>
#include <stdlib.h>

/*int main()
{
    int a=5;    //Question 1° affiche un entier et son adresse
    int * p = &a;
    printf("%d \n",a);
    printf("%d \n",&a);

    char c = 'A';   //Question 2° affiche un caractere et son adresse
    char * pc = &c;
    printf("%c \n",c);
    printf("%d \n",&c);
}

void permuter(int * a, int * b) //Question 3° permutation de 2 valeur
{
    int temp = * a;
    * a = * b;
    * b = temp;
}
void main()
{
    int valeur1=5, valeur2=3;
    printf("Avant permutation valeur1= %d valeur2= %d \n",valeur1 ,valeur2);
    permuter(&valeur1,&valeur2);
    printf("Après permutation valeur1=%d valeur2 =%d \n ",valeur1,valeur2);
}

void maxmin ( int * a,int *b,int * c, int * max, int * min)//Question 4° valeur maximal et minimal sur 3 valeur
{
    * max =* a;
    * min =* a;

    if (* max < * b && * b> * c)
        * max = *b;
    else if (* max > *c)
        * max = * a;
    else * max = *c;

    if (* min > * b && * b < * c)
        * min = *b;
    else if (* min < *c)
        * min = * a;
    else * min = *c;
}
int main(int argc, char **argv)
 {int a =54,b=38,c=29;

 int max = 0;
 int min = 0;
 printf("Valeur de a %d \n",a);
 printf("Valeur de b %d \n",b);
 printf("Valeur de c %d \n",c);

 maxmin(&a,&b,&c,&max,&min);
 printf("Valeur max = %d \n",max);
 printf("Valeur min = %d \n",min);
}
*/

