2. une fonction récursive de calcul de la somme à 2 paramètres au lieu des 3 paramètres de la fonction
donnée dans le code ci-dessus ;


int somme(Tab t, int n) //fonction somme modifié a 2 paramètres
{ int res=0;
printf ("Calcul de la somme a partir de l indice %d :\n",n);
if (n>0)
{ printf ("\t appel du calcul de la somme a partir de l indice %d :\n",n-1);
res=t[n-1]+somme(t,n-1);
printf ("\t addition avec t[%d]\n",n-1 );
}
printf ("\t Somme a partir de l indice %d = %d",n,res);
return res ;
}
