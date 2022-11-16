//5. une fonction récursive de recherche d’une valeur v dans le tableau non trié (retourne l’indice si trouvée,-1 sinon) ;

int recherche(int tab[], int n, int v){
    if(n==0) return -1;
    if(tab[n-1]==v) return n;
    return recherche(tab,n-1,v);
}
