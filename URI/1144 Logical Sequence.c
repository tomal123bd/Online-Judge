/*
    *https://www.urionlinejudge.com.br/judge/en/problems/view/1144
    *Ashikur Rahman Tomal
    *tomal123bd@gmail.com
    *facebook.com/tomal123
    *+8801737513080
*/

#include <stdio.h>
int main ()
{
    int n;
    scanf ("%d",&n);
    int i;
    for (i=1;i<=n;i++){
        printf("%d ",i);
        printf("%d ",i*i);
        printf("%d\n",i*i*i);
        printf("%d ",i);
        printf("%d ",i*i+1);
        printf("%d\n",i*i*i+1);
    }
    return 0;
}
