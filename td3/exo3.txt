#include <stdio.h>
#include <stdlib.h>

#define N 10

int saisie(int T[], int n);
int somme(int T[], int n);
int trier(int T[], int n);
int max(int T[], int n);
int minmax(int T[], int n, int *min, int *max);



int saisie(int T[], int n)
{
    if (n == 0)
        return 0;
    else
    {
        int m = saisie(T, n - 1);
        printf("T[%d] = ", m);
        scanf("%d", &T[m]);
        return m + 1;
    }
}

int somme(int T[], int n)
{
    if (n == 0)
        return 0;
    else
        return T[n - 1] + somme(T, n - 1);
}

int trier(int T[], int n)
{
    if (n == 0 || n == 1)
        return 1;
    else
        return T[n - 1] >= T[n - 2] && trier(T, n - 1);
}

int max(int T[], int n)
{
    if (n == 1)
        return T[0];
    else
    {
        int x = max(T, n - 1);
        return x > T[n - 1] ? x : T[n - 1];
    }
}

int minmax(int T[], int n, int *min, int *max)
{
    if (n == 1)
    {
        *min = *max = T[0];
        return 1;
    }
    else
    {
        int x, y;
        minmax(T, n - 1, &x, &y);
        *min = x < T[n - 1] ? x : T[n - 1];
        *max = y > T[n - 1] ? y : T[n - 1];
        return 1;
    }
}
int main()
{
    int T[N];
    int n;
    int min, max;
    printf("saisie de %d entiers : ", N);
    n = saisie(T, N);
    printf("somme des %d premiers entiers : %d", n, somme(T, n));
    printf("tableau trie : %s", trier(T, n) ? "oui" : "non");
    printf("valeur maximale : %d", max(T, n));
    minmax(T, n, &min, &max);
    printf("valeurs minimale et maximale : %d, %d", min, max);
    return 0;
}
