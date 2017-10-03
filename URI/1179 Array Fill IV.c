/*
    *https://www.urionlinejudge.com.br/judge/en/problems/view/1179
    *Ashikur Rahman Tomal
    *tomal123bd@gmail.com
    *facebook.com/tomal123
    *+8801737513080
*/

#include <stdio.h>
int main ()
{
    int n,j,k,par[15],impar[15],i,count;
    for (i=0,j=0,k=0;i<15;i++){
        scanf("%d",&n);
        if (j==5){
            for (count=0;count<j;count++) printf("par[%d] = %d\n",count,par[count]);
            j=0;
        }
        if (k==5){
            for (count=0;count<k;count++) printf("impar[%d] = %d\n",count,impar[count]);
            k=0;
        }
        if (n%2==0) {
            par[j]=n;
            j++;
        }
        else {
            impar[k]=n;
            k++;
        }
    }
    for (count=0;count<k;count++) printf("impar[%d] = %d\n",count,impar[count]);
    for (count=0;count<j;count++) printf("par[%d] = %d\n",count,par[count]);
    return 0;
}
