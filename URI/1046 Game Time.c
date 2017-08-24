/*
    *https://www.urionlinejudge.com.br/judge/en/problems/view/1046
    *Ashikur Rahman Tomal
    *tomal123bd@gmail.com
    *facebook.com/tomal123
    *+8801737513080
*/

#include <stdio.h>
int main ()
{
    int s,e;
    scanf ("%d %d",&s,&e);
    if (s>=e) printf("O JOGO DUROU %d HORA(S)\n",(e+24)-s);
    else printf("O JOGO DUROU %d HORA(S)\n",e-s);
    return 0;
}
