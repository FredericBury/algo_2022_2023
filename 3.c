*/*3. une fonction récursive qui retourne le nombre d’éléments du tableau de valeur supérieure à la valeur
v donnée en paramètre ;*/

int sup(int *tab, int n, int v) // fonction pour retourner le nombre d'éléments supérieur a la valeur v
{
    if (n == 0)
        return 0;
    else
    {
        if (tab[n - 1] < v)
            return 1 + sup(tab, n - 1, v);
        else
            return sup(tab, n - 1, v);
    }
}
