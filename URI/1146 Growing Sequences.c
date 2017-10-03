/*
    *https://www.urionlinejudge.com.br/judge/en/problems/view/1146
    *Ashikur Rahman Tomal
    *tomal123bd@gmail.com
    *facebook.com/tomal123
    *+8801737513080
*/

#include <stdio.h>
int main ()
{
    int x,i;
    while(1){
        scanf("%d",&x);
        if (x==0) return 0;
        for (i=1;i<=x;i++){
            if (i==x) {
                printf("%d\n",i);
                break;
            }
            printf("%d ",i);
        }
    }
}
