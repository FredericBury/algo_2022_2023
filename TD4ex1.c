#include <stdio.h>
#include <stdlib.h>

#define TAILLE 10

typedef struct {
    int tab[TAILLE];
    int taille;
} Tab;

int dicho(Tab t ,int c, int g ,int d )
{
    int m;
    if (g > d)
        return -1;
    m = (g + d) / 2;
    if (t.tab[m] == c)
        return m;
    else if (t.tab[m] > c)
        return dicho(t, c, g, m - 1);
    else
        return dicho(t, c, m + 1, d);
}

int main() {
    Tab t = {{0, 1,2, 3, 4, 5, 6, 7, 8, 9}, 10};
    printf("%d \n", dicho(t, 8, 0, 9)); // donne 8
    printf("%d", dicho(t, 11, 0, 9)); //donne -1
    return 0;
}
