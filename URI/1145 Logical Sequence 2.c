/*
    *https://www.urionlinejudge.com.br/judge/en/problems/view/1145
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
    int i,count=1;
    for (i=1;i<=Y;i++){
        if (count==X) {
            printf ("%d",i);
            printf("\n");
            count=1;
        }
        else {
            printf ("%d ",i);
            count++;
        }
    }
    return 0;
}
