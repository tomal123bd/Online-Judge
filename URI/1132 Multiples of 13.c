/*
    *https://www.urionlinejudge.com.br/judge/en/problems/view/1132
    *Ashikur Rahman Tomal
    *tomal123bd@gmail.com
    *facebook.com/tomal123
    *+8801737513080
*/

#include <stdio.h>
int main ()
{
    int X,Y;
    scanf ("%d %d",&X,&Y);
    int temp,i,sum=0;
    if (X>Y){
        temp=X;
        X=Y;
        Y=temp;
    }
    for (i=X;i<=Y;i++) {
        if (i%13!=0) sum+=i;
    }
    printf("%d\n",sum);
    return 0;
}
