/*
    *https://www.urionlinejudge.com.br/judge/en/problems/view/1175
    *Ashikur Rahman Tomal
    *tomal123bd@gmail.com
    *facebook.com/tomal123
    *+8801737513080
*/

#include <stdio.h>
int main ()
{
    int n[20],i,j;
    for (i=0,j=19;i<20;i++,j--) scanf("%d",&n[j]);
    for (i=0;i<20;i++) printf("N[%d] = %d\n",i,n[i]);
    return 0;
}
