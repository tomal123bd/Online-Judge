/*
    *https://www.urionlinejudge.com.br/judge/en/problems/view/1178
    *Ashikur Rahman Tomal
    *tomal123bd@gmail.com
    *facebook.com/tomal123
    *+8801737513080
*/

#include <stdio.h>
int main ()
{
    double x,n;
    scanf("%lf",&x);
    int i;
    for (i=0;i<100;i++){
        printf("N[%d] = %.4lf\n",i,x);
        x/=2;
    }
    return 0;
}
