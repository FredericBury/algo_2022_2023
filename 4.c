//4. une fonction récursive qui affiche le tableau selon les indices décroissants (en partant du dernier) ;


void TabInv(int tab[],int n)
{
    if(n > 0)
    {
        printf("%d ", tab[n - 1]);
        TabInv(tab, n - 1);
    }
}
