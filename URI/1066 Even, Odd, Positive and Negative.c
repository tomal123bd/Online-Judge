/*
    *https://www.urionlinejudge.com.br/judge/en/problems/view/1066
    *Ashikur Rahman Tomal
    *tomal123bd@gmail.com
    *facebook.com/tomal123
    *+8801737513080
*/

#include <stdio.h>
int main ()
{
    int num[5];
    scanf ("%d %d %d %d %d",&num[0],&num[1],&num[2],&num[3],&num[4]);
    int i,count=0;
    for (i=0;i<5;i++){
        if (num[i]%2==0) count++;
    }
    printf("%d valor(es) par(es)\n",count);
    count=0;
    for (i=0;i<5;i++){
        if (num[i]%2!=0) count++;
    }
    printf("%d valor(es) impar(es)\n",count);
    count=0;
    for (i=0;i<5;i++){
        if (num[i]>0) count++;
    }
    printf("%d valor(es) positivo(s)\n",count);
    count=0;
    for (i=0;i<5;i++){
        if (num[i]<0) count++;
    }
    printf("%d valor(es) negativo(s)\n",count);
    count=0;
    return 0;
}
