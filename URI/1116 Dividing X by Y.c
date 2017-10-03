/*
    *
    *Ashikur Rahman Tomal
    *tomal123bd@gmail.com
    *facebook.com/tomal123
    *+8801737513080
*/

#include <stdio.h>
int main ()
{
    int N;
    float X,Y;
    scanf ("%d",&N);
    while (N--){
        scanf ("%f %f",&X,&Y);
        if (Y==0) printf ("divisao impossivel\n");
        else printf ("%.1f\n",X/Y);
    }
    return 0;
}
