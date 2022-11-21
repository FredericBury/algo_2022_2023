#include <stdio.h>
#include <stdlib.h>

#define TAILLE 10

typedef int tab[TAILLE];

int min(tab t, int i, int j) {
    int min = i;
    for (int k = i + 1; k <= j; k++) {
        if ( t[k] <  t[min]) {
            min = k;
        }
    }
    return min;
}

void swap(tab t, int i, int j) {
    int temp = t[i];
    t[i] = t[j];
    t[j] = temp;
}

void tri_selection(tab t, int N) {
  int i, j, m, tmp;
  for (i = 0; i < N; i++) {
    m = i;
    for (j = i + 1; j < N; j++) {
      if (t[j] < t[m]) {
        m = j;
      }
    }
    tmp = t[i];
    t[i] = t[m];
    t[m] = tmp;
  }
}

int main(){
tab t={{3,17,9,15,2,7,10,9,8,12},10};
printf("%d \n",min(t,0,10));
swap(t,0,10);
}
