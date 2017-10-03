/*
    *https://www.urionlinejudge.com.br/judge/en/problems/view/1115
    *Ashikur Rahman Tomal
    *tomal123bd@gmail.com
    *facebook.com/tomal123
    *+8801737513080
*/

#include <stdio.h>
int main ()
{
    int X,Y;
    while (1){
        scanf("%d %d",&X,&Y);
        if (X==0 || Y==0) return 0;
        if (X>0 && Y>0) printf("primeiro\n");
        if (X>0 && Y<0) printf("quarto\n");
        if (X<0 && Y<0) printf("terceiro\n");
        if (X<0 && Y>0) printf("segundo\n");
    }
}
