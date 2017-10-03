/*
    *https://www.urionlinejudge.com.br/judge/en/problems/view/1173
    *Ashikur Rahman Tomal
    *tomal123bd@gmail.com
    *facebook.com/tomal123
    *+8801737513080
*/

#include <stdio.h>
int main ()
{
    int n[10],x,i;
    scanf("%d",&x);
    for (i=0;i<10;i++){
        printf("N[%d] = %d\n",i,x);
        x*=2;
    }
    return 0;
}
