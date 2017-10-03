/*
    *https://www.urionlinejudge.com.br/judge/en/problems/view/1164
    *Ashikur Rahman Tomal
    *tomal123bd@gmail.com
    *facebook.com/tomal123
    *+8801737513080
*/

#include <stdio.h>
int main ()
{
    int n,sum=0,i,t;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        for (i=1;i<n;i++){
            if (n%i==0) sum+=i;
        }
        if (sum==n) printf("%d eh perfeito\n",n);
        else printf("%d nao eh perfeito\n",n);
        sum=0;
    }
    return 0;
}
