#include <stdio.h>
#include <stdlib.h>

typedef char Chaine[15];
typedef char NTel[10];


typedef struct _Client{
    int idClient;
    Chaine Nom;
    NTel tel;
}Clients;

/int AjouterClientsFichier(char * client,Clients c)
{
  FILE * f= fopen(client,"w");
  if (!f) printf("Erreur à l'ouverture de %s\n",client);
else {
    fprintf(f,"id :%d Nom : %s NTel:%s \n",c.idClient,c.Nom,c.tel);
    fclose(f);
}
}

void afficherClientsFichier(char * client)
{
    FILE * f =fopen(client,"r");
    char nom[100];

    if (!f) printf("Erreur à l'ouverture de 2  %s\n",client);
else {
        while(fgets(nom,100,f))
            printf("%s \n",nom);
        fclose(f);
   }
}

int nombreClientsFichier(char* nomFichier)
{
    FILE * f = fopen(nomFichier, "r");
    int nbClients = 0;
    char ligne[100];
    char * token;
    char * clients[100];
    int i = 0;
    int j = 0;
    int k = 0;
    int l = 0;
    int doublon = 0;
    while (fgets(ligne, 100, f) != NULL)
    {
        token = strtok(ligne, ";");
        while (token != NULL)
        {
            if (i == 0)
            {
                for (j = 0; j < nbClients; j++)
                {
                    if (strcmp(clients[j], token) == 0)
                    {
                        doublon = 1;
                    }
                }
                if (doublon == 0)
                {
                    clients[nbClients] = token;
                    nbClients++;
                }
                else
                {
                    doublon = 0;
                }
            }
            token = strtok(NULL, ";");
            i++;
        }
        i = 0;
    }
    fclose(f);
    return nbClients;
}
void triClientsFichier(char *nomFichierEntree, char *nomFichierSortie) {
    char *ligne[MAX];
    int nbLignes = 0;
    FILE *fichierEntree = fopen(nomFichierEntree, "r");
    if (fichierEntree == NULL) {
        printf("Impossible d'ouvrir le fichier %s", nomFichierEntree);
        return;
    }
    FILE *fichierSortie = fopen(nomFichierSortie, "w");
    if (fichierSortie == NULL) {
        printf("Impossible d'ouvrir le fichier %s", nomFichierSortie);
        return;
    }
    while (fgets(ligne, MAX, fichierEntree) != NULL) {
        nbLignes++;
    }
    char **lignes = malloc(nbLignes * sizeof(char *));
    rewind(fichierEntree);
    for (int i = 0; i < nbLignes; i++) {
        lignes[i] = malloc(MAX * sizeof(char));
        fgets(lignes[i], MAX, fichierEntree);
    }
    for (int i = 0; i < nbLignes - 1; i++) {
        for (int j = i + 1; j < nbLignes; j++) {
            if (strcmp(lignes[i], lignes[j]) > 0) {
                char *tmp = lignes[i];
                lignes[i] = lignes[j];
                lignes[j] = tmp;
            }
        }
    }
    for (int i = 0; i < nbLignes; i++) {
        fputs(lignes[i], fichierSortie);
    }
    free(lignes);
    fclose(fichierEntree);
    fclose(fichierSortie);
}

int appartientClientFichier(char *nomClient)
{
    FILE *fichier = fopen("clients.txt", "r");
    if (fichier == NULL)
    {
        printf("Impossible d'ouvrir le fichier");
        return -1;
    }

    char chaine[100];
    int trouve = 0;
    while (fgets(chaine, 100, fichier) != NULL && !trouve)
    {
        char *nom = strtok(chaine, ";");
        if (strcmp(nom, nomClient) == 0)
        {
            printf("%s", chaine);
            trouve = 1;
        }
    }

    if (!trouve)
    {
        printf("Client non répertorié");
    }

    fclose(fichier);
    return 0;
}
int main (int argc, const char * argv[])
{
AjouterClientsFichier("C:/Users/Frede/OneDrive/Documents/2eme annee/algo/TD6/client.txt");
afficherClientsFichier("C:/Users/Frede/OneDrive/Documents/2eme annee/algo/TD6/client.txt");
return 0;
}
