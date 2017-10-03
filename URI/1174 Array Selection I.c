/*
    *https://www.urionlinejudge.com.br/judge/en/problems/view/1174
    *Ashikur Rahman Tomal
    *tomal123bd@gmail.com
    *facebook.com/tomal123
    *+8801737513080
*/

#include <stdio.h>
int main ()
{
    float a[100],x;
    int i,j=0;
    for (i=0;i<100;i++){
        scanf("%f",&a[i]);
    }
    for (i=0;i<100;i++) {
        if (a[i]<=10) printf("A[%d] = %.1f\n",i,a[i]);
    }
    return 0;
}
