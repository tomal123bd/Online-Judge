/*
    *https://www.urionlinejudge.com.br/judge/en/problems/view/1117
    *Ashikur Rahman Tomal
    *tomal123bd@gmail.com
    *facebook.com/tomal123
    *+8801737513080
*/

#include <stdio.h>
int main ()
{
    float a,b;
    while (1){
        scanf ("%f",&a);
        if (a<0 || a>10) {
            printf("nota invalida\n");
            continue;
        }
        break;
    }
    while (1){
        scanf ("%f",&b);
        if (b<0 || b>10) {
            printf("nota invalida\n");
            continue;
        }
        break;
    }
    printf("media = %.2f\n",(a+b)/2);
    return 0;
}
