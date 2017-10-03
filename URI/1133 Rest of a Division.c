/*
    *https://www.urionlinejudge.com.br/judge/en/problems/view/1133
    *Ashikur Rahman Tomal
    *tomal123bd@gmail.com
    *facebook.com/tomal123
    *+8801737513080
*/
#include <stdio.h>
int main ()
{
    int X,Y,temp;
    scanf ("%d %d",&X,&Y);
    if (X>Y){
        temp=Y;
        Y=X;
        X=temp;
    }
    X++;Y--;
    while(X!=Y){
        if (X%5==2 || X%5==3) printf("%d\n",X);
        X++;
    }
    return 0;
}
