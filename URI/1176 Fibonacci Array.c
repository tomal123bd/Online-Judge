/*
    *https://www.urionlinejudge.com.br/judge/en/problems/view/1176
    *Ashikur Rahman Tomal
    *tomal123bd@gmail.com
    *facebook.com/tomal123
    *+8801737513080
*/

#include <stdio.h>
int main ()
{
    long long n,a,b,c,i;
    int t;
    scanf("%d",&t);
    while(t--){
        scanf("%lld",&n);
        c=0;
        if (n==0) {
            printf("Fib(0) = 0\n");
            continue;
        }
        if (n==1) {
            printf("Fib(1) = 1\n");
            continue;
        }
        a=0;b=1;
        for (i=2;i<=n;i++){
            c=a+b;
            a=b;
            b=c;
        }
        printf("Fib(%lld) = %lld\n",n,c);
    }
    return 0;
}
