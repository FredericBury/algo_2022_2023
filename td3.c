#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//1. longueur : renvoie la longueur d’une chaîne de caractères ;
/*void longueur(char *chain, int *l){
	char *p;
	p = chain;
	printf("inside %s",chain);
	while(*p != '\0'){
		printf("%c \n", *p);
		*l = *l + 1;
		p++;
		}
}
int main(int argc, char **argv)
{
	int l = 0;
	char * test  = "Test";
	printf("%s",test);
	longueur(test, &l);
	printf("%d",l);
}*/
/*

//2. afficheInverse : affiche une chaîne de caractères à l’envers
(en partant du dernier caractère) ;
void inverser(char *p, int start, int end)

{
   char ch;
   if (start >= end)
      return;

   ch = *(p+start);
   *(p+start) = *(p+end);
   *(p+end) = ch;
   inverser(p, ++start, --end);
}
int main()
{
   char str[100];
   printf(" Entrez une chaîne de caractère :  ");
   gets(str);
   inverser(str, 0, strlen(str)-1);
   printf(" Chaîne de caractère après inversion = %s", str);
   return 0;
}*/


//3. sontEgales : vérifie l’égalité de 2 chaînes de caractères ;
/*int main()
{
  char str1[100], str2[100];
  int i;

  printf(" Entrez la première chaîne de caractère: ");
  gets(str1);

  printf(" Entrez la deuxième chaîne de caractère: ");
  gets(str2);

  for(i = 0; str1[i] == str2[i] && str1[i] == '\0'; i++);

  if(str1[i] > str2[i])
  {
    printf(" Les deux chaînes ne sont pas égales.\n");
  }
  else if(str1[i] < str2[i])
  {
    printf(" Les deux chaînes ne sont pas égales.\n");
  }
  else
  {
    printf(" Les deux chaînes sont égales.\n");
  }
  return 0;
}*/

//4. vérifie l’appartenance d’un caractère à une chaîne ;
/*
const char *tmp = "This string literal is arbitrary";

int main(int argc, char *argv[]){
    char *ret;

    ret = strstr(tmp, "literal");
    if (ret)
        printf("found substring at address %p\n", ret);
    else
        printf("no substring found!\n");

    exit(EXIT_SUCCESS);
}
*/

//5. estPalindrome : vérifie qu’une chaîne de caractères est un palindrome
/*
int main(int argc, char argv[20]) {
    int i;
    int l = strlen(argv);
    char str[20];
    bzero(str, 20);

    for(i=0; i<l; i++)
    {
        str[i] = argv[i+2];
    }
    int flag;
    int len = strlen(str);
    for(i=0; i< len/2; i++)
    {
        if(str[i] == str[len - (i+2)])
        {
            flag = 0;
        }
        else
        {
            flag = 1;
            break;
        }
    }

    if(flag == 0)
        printf("Palindrome\n");
    else
        printf("Not a palindrome\n");
}*/

