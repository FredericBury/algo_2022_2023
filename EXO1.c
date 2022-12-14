#include <stdio.h>
//1. longueur : renvoie la longueur d’une chaîne de caractères ;
int longueur(char *chaine) {
    int i = 0;
    while (chaine[i] != '\0') {
        i++;
    }
    return i;
}
//2. afficheInverse : affiche une chaîne de caractères à l’envers (en partant du dernier caractère) ;
void afficheInverse(char *chaine) {
    int i = longueur(chaine);
    while (i >= 0) {
        printf("%c", chaine[i]);
        i--;
    }
}
//3. sontEgales : vérifie l’égalité de 2 chaînes de caractères ;
int sontEgales(char *chaine1, char *chaine2) {
    int i = 0;
    while (chaine1[i] != '\0' && chaine2[i] != '\0') {
        if (chaine1[i] != chaine2[i]) {
            return 0;
        }
        i++;
    }
    return 1;
}
//4. appartientA : vérifie l’appartenance d’un caractère à une chaîne ;
int appartientA(char *chaine, char c) {
    int i = 0;
    while (chaine[i] != '\0') {
        if (chaine[i] == c) {
            return 1;
        }
        i++;
    }
    return 0;
}
//5. estPalindrome : vérifie qu’une chaîne de caractères est un palindrome (se lit de façon identique de gauche à droite et de droite à gauche, comme "ici", "eve", "radar").

int estPalindrome(char *chaine) {
    int i = 0;
    int j = longueur(chaine) - 1;
    while (i < j) {
        if (chaine[i] != chaine[j]) {
            return 0;
        }
        i++;
        j--;
    }
    return 1;
}

int main() {
    char *chaine = "radar";
    printf("%d", longueur(chaine));
    afficheInverse(chaine);
    printf("");
    printf("%d", sontEgales("radar", "radar"));
    printf("%d", appartientA(chaine, 'a'));
    printf("%d", estPalindrome(chaine));
    return 0;
}

