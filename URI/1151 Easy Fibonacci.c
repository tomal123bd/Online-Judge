/*
    *https://www.urionlinejudge.com.br/judge/en/problems/view/1151
    *Ashikur Rahman Tomal
    *tomal123bd@gmail.com
    *facebook.com/tomal123
    *+8801737513080
*/

#include <stdio.h>
int main ()
{
    int n;
    scanf("%d",&n);
    int a=0,b=1,c,i;
    printf("%d ",a);
    for (i=2;1;i++){
        c=a+b;
        b=a;
        a=c;
        if (i==n) {
            printf("%d\n",c);
            break;
        }
        printf("%d ",c);
    }
    return 0;
}
