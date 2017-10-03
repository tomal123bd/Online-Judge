/*
    *https://www.urionlinejudge.com.br/judge/en/problems/view/1177
    *Ashikur Rahman Tomal
    *tomal123bd@gmail.com
    *facebook.com/tomal123
    *+8801737513080
*/

#include <stdio.h>
int main ()
{
    int t,i,n,j;
    scanf("%d",&t);
    for (i=0;i<1000;){
        for (j=0;j<t && i<1000;j++,i++){
            printf("N[%d] = %d\n",i,j);
        }
    }
    return 0;
}
