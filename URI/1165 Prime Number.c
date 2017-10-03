/*
    *https://www.urionlinejudge.com.br/judge/en/problems/view/1165
    *Ashikur Rahman Tomal
    *tomal123bd@gmail.com
    *facebook.com/tomal123
    *+8801737513080
*/

#include <stdio.h>
#include <math.h>
int main ()
{
    int x,n,i,flag=0;
    scanf ("%d",&x);
    while(x--){
        scanf("%d",&n);
        if (n==1) printf("1 nao eh primo\n");
        else if (n==2) printf("2 eh primo\n");
        else if (n%2==0) printf("%d nao eh primo\n",n);
        else {
            for (i=3;i<=sqrt(n);i+=2){
                if (n%i==0) {
                    printf("%d nao eh primo\n",n);
                    flag=1;
                    break;
                }
            }
            if (flag!=1) printf("%d eh primo\n",n);
            flag=0;
        }
    }
    return 0;
}
