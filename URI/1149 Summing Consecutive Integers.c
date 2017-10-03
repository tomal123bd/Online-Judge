/*
    *https://www.urionlinejudge.com.br/judge/en/problems/view/1149
    *Ashikur Rahman Tomal
    *tomal123bd@gmail.com
    *facebook.com/tomal123
    *+8801737513080
*/

#include <stdio.h>
int main ()
{
    int a,n,temp,sum=0,i;
    scanf("%d",&a);
    do {
        scanf("%d",&n);
    } while (n<=0);
    for (i=0;i<n;i++){
        sum=sum+i+a;
    }
    printf("%d\n",sum);
    return 0;
}
