/*
    *https://www.urionlinejudge.com.br/judge/en/problems/view/1101
    *Ashikur Rahman Tomal
    *tomal123bd@gmail.com
    *facebook.com/tomal123
    *+8801737513080
*/

#include <stdio.h>
int main ()
{
    int M,N,i,temp,sum=0;
    while (1){
        scanf ("%d %d",&M,&N);
        if (M<=0 || N<=0) return 0;
        if (M>N) {
            temp=N;
            N=M;
            M=temp;
        }
        for (i=M;i<=N;i++){
            printf ("%d ",i);
            sum=sum+i;
        }
        printf ("Sum=%d\n",sum);
        sum=0;
    }
}
