/*
    *https://www.urionlinejudge.com.br/judge/en/problems/view/1049
    *Ashikur Rahman Tomal
    *tomal123bd@gmail.com
    *facebook.com/tomal123
    *+8801737513080
*/

#include <stdio.h>
#include <string.h>
int main ()
{
    char a1[15],a2[15],a3[15];
    //scanf("%27[^\n]%*c", animal);
    scanf("%s",a1);
    char c;
    scanf("%c",&c);
    scanf("%s",a2);
    scanf("%c",&c);
    scanf("%s",a3);
    scanf("%c",&c);
    if (strcmp(a1,"vertebrado")==0) {
        if (strcmp(a2,"ave")==0) {
            if (strcmp(a3,"carnivoro")==0)
                printf("aguia\n");
            if (strcmp(a3,"onivoro")==0)
                printf("pomba\n");
        }
        if (strcmp(a2,"mamifero")==0) {
            if (strcmp(a3,"onivoro")==0)
                printf("homem\n");
            if (strcmp(a3,"herbivoro")==0)
                printf("vaca\n");
        }
    }
    if (strcmp(a1,"invertebrado")==0) {
        if (strcmp(a2,"inseto")==0) {
            if (strcmp(a3,"hematofago")==0)
                printf("pulga\n");
            if (strcmp(a3,"herbivoro")==0)
                printf("lagarta\n");
        }
        if (strcmp(a2,"anelideo")==0) {
            if (strcmp(a3,"hematofago")==0)
                printf("sanguessuga\n");
            if (strcmp(a3,"onivoro")==0)
                printf("minhoca\n");
        }
    }
    return 0;
}
