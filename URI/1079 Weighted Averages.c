/*
    *https://www.urionlinejudge.com.br/judge/en/problems/view/1079
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
    float a,b,c;
    while (N--){
        scanf ("%f %f %f",&a,&b,&c);
        printf ("%.1f\n",((a*2)+(b*3)+(c*5))/10);
    }
    return 0;
}
