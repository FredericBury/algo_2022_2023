/*6. une fonction récursive de recherche par dichotomie d’une valeur v dans le tableau trié (retourne l’indice
si trouvée, -1 sinon) ; utiliser un 2e tableau t2 dans le main.*/


int rechercheDicho(Tab t, int v, int debut, int fin )
{   int m;
    if (debut < fin)
    {   m=(debut+fin)/2;
        if (v < t[m]) return rechercheDicho(t, v, debut, m);
        if (v > t[m]) return rechercheDicho(t, v, m+1, fin);
    }
    else{return -1;
        }
    return debut;
}