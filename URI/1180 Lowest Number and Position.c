/*
    *https://www.urionlinejudge.com.br/judge/en/problems/view/1180
    *Ashikur Rahman Tomal
    *tomal123bd@gmail.com
    *facebook.com/tomal123
    *+8801737513080
*/

#include <stdio.h>
int main ()
{
    int n,x,i,min,pos=0;
    scanf("%d",&n);
    scanf("%d",&x);
    min=x;
    for (i=1;i<n;i++){
        scanf("%d",&x);
        if (min>x){
            min=x;
            pos=i;
        }
    }
    printf("Menor valor: %d\n",min);
    printf("Posicao: %d\n",pos);
    return 0;
}
