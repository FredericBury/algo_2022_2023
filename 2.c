void remplirTableau(Tab t, int n)
{ 
    int i ;
    srand ( time(NULL) ); //  random
    for (i=0; i<n; i++)
    t[ i]= rand() % n; // t[i] random value
}

void affiche (int *t, int n , int i ) 
{
	if (i == n) return;
	printf("| %d", t[0]) ;
        affiche (t + 1 , n, i+1) ;
}

