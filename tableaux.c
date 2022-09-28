#include <stdio.h>
#include <stdlib.h>

#define N 10
typedef float TabNotes[N];
typedef int TabCoef[N];

int moyenne(TabNotes Note, TabCoef coef )
{
    int i;
    float moy=0;
    int tcoef=0;
    for ( i=0;i<N;i++)
    {
        printf("Entrez la note %d \n",(i+1));
        scanf("%f",&Note[i]);
        printf("Entrez le coefficient de la note %d \n",(i+1));
        scanf("%d",&coef[i]);

        moy = moy + (Note[i]*coef[i]);
        tcoef = tcoef + coef[i];
    }
    moy = moy/tcoef;
}
int afficher(TabNotes Note, TabCoef coef)
{
    int i;
    printf("Les notes et leur coef :\n");
    for ( i=0;i<N;i++)
        printf("%f et %d",Note[i],coef[i]);
}
int maxmin(TabNotes Note)
{
    int i;
    float min = Note[0];
    float max = Note[0];
    for (i = 0;i < N; i++)
    {
        if (min > Note[i])
            min = Note[i];
        if (max < Note[i])
            max = Note[i];
    }
    printf("La note maximale est : %f \n", max);
    printf("La note minimale est : %f \n", min);
}
int point(TabNotes Notes)
{
    int i;
    for (i = 0;i < N; i++)
        Notes[i] = Notes[i] + 1;
}
int modifNote(TabNotes Notes)
{
    int modif;
    printf("Quelle est le numéro de la note que vous voulez modifiez \n");
    scanf("%d",&modif);
    printf("Entrer la nouvelle note\n");
    scanf("%f", &Notes[modif-1]);
}
int main(int argc, char **argv)
{
    TabNotes Note[N];
    TabCoef coef[N];
    moyenne(Note,coef);
    afficher(Note,coef);
    maxmin(Note);
    point(Note);
    afficher(Note,coef);
    modifNote(Note);
    afficher(Note,coef);
}
