/*
    *https://www.urionlinejudge.com.br/judge/en/problems/view/1094
    *Ashikur Rahman Tomal
    *tomal123bd@gmail.com
    *facebook.com/tomal123
    *+8801737513080
*/

#include <stdio.h>
int main ()
{
    int N;
    scanf ("%d",&N);
    int C=0,R=0,S=0,temp;
    char chk;
    int i;
    for (i=1;i<=N;i++){
        scanf("%d %c",&temp,&chk);
        if (chk=='C') C+=temp;
        if (chk=='R') R+=temp;
        if (chk=='S') S+=temp;
    }
    float temp2=C+R+S;
    printf("Total: %d cobaias\n",C+R+S);
    printf("Total de coelhos: %d\n",C);
    printf("Total de ratos: %d\n",R);
    printf("Total de sapos: %d\n",S);
    printf("Percentual de coelhos: %.2f %%\n",((float)C*100)/temp2);
    printf("Percentual de ratos: %.2f %%\n",((float)R*100)/temp2);
    printf("Percentual de sapos: %.2f %%\n",((float)S*100)/temp2);
    return 0;
}
