/*
    *https://www.urionlinejudge.com.br/judge/en/problems/view/1172
    *Ashikur Rahman Tomal
    *tomal123bd@gmail.com
    *facebook.com/tomal123
    *+8801737513080
*/

#include <stdio.h>
int main ()
{
    int x[10],i;
    for (i=0;i<10;i++){
        scanf("%d",&x[i]);
        if (x[i]<=0) x[i]=1;
    }
    for (i=0;i<10;i++) printf("X[%d] = %d\n",i,x[i]);
    return 0;
}
