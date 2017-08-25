/*
    *https://www.urionlinejudge.com.br/judge/en/problems/view/1099
    *Ashikur Rahman Tomal
    *tomal123bd@gmail.com
    *facebook.com/tomal123
    *+8801737513080
*/

#include <stdio.h>
int main ()
{
    int N,X,Y,sum=0,temp,i;
    scanf ("%d",&N);
    while (N--){
        scanf ("%d %d",&X,&Y);
        if (X>Y) {
            temp=Y;
            Y=X;
            X=temp;
        }
        if (X%2!=0) X++;
        if (Y%2!=0) Y--;;
        for (i=X;i<=Y;i++){
            if (i%2!=0) sum=sum+i;
        }
        printf ("%d\n",sum);
        sum=0;
    }
    return 0;
}
