/*
    *https://www.urionlinejudge.com.br/judge/en/problems/view/1044
    *Ashikur Rahman Tomal
    *tomal123bd@gmail.com
    *facebook.com/tomal123
    *+8801737513080
*/

#include <stdio.h>
int main ()
{
    int A,B;
    scanf ("%d %d",&A,&B);
    if (B%A==0 || A%B==0) printf("Sao Multiplos\n");
    else printf("Nao sao Multiplos\n");
    return 0;
}
