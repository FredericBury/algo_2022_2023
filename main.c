int main()
{ Tab t1 = {4,2,8,0,7,3,1,5,9,6};
  Tab t2 = {0,1,2,3,4,5,6,7,8,9};

printf ("La somme des entiers du tableau t1 = %d\n",somme(t1,N));

printTab(t1,N);

printf ("\n");

TabInv(t1,N);

int nbr = sup(t1,N,5); //appel de la fonction sup a v
printf ("\n %d ",nbr);

int rec = recherche(t1,N,3); //appel de la fonction rechercher
printf ("\n %d",rec);

int recD = rechercheDicho(t2,0,0,9);//appel de la fonction Dichotomique return 3
printf("\n %d ",recD);
int recD = rechercheDicho(t2,11,0,9);//appel de la fonction Dichotomique return -1
printf("\n %d ",recD);

return 0;
}