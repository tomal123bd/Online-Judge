/*
    *https://www.urionlinejudge.com.br/judge/en/problems/view/1072
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
    int i,X[N],in=0,out=0;
    for (i=0;i<N;i++){
        scanf ("%d",&X[i]);
        if (X[i]>=10 && X[i]<=20) in++;
        else out++;
    }
    printf("%d in\n%d out\n",in,out);
    return 0;
}
