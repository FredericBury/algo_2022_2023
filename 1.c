#include <stdio.h>
#define N 10
typedef int Tab[N];
int somme(Tab t, int n, int i )
{ int res=0;
printf ("Calcul de la somme a partir de l’indice %d :\n",i);
if (i<n)
{ printf ("\t appel du calcul de la somme a partir de l’indice %d :\n",i+1);
res=t[i]+somme(t,n,i+1);
printf ("\t addition avec t[%d]\n",i );
}
printf ("\t Somme a partir de l’indice %d = %d\n\n",i,res);
return res ;
}
int main()
{ Tab t1 = {4,2,8,0,7,3,1,5,9,6};
printf ("La somme des entiers du tableau t1 = %d\n",somme(t1,N,0));
return 0;
}

//1. une fonction récursive d’affichage du contenu du tableau ;

void printTab(int tab[],int n)//fonction récursive d'affichage tableaux
{
    if(n==1)
        printf("%d",tab[0]);
    else
    {
        printTab(tab,n-1);
        printf(" %d",tab[n-1]);
    }
}

