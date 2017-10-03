/*
    *https://www.urionlinejudge.com.br/judge/en/problems/view/1118
    *Ashikur Rahman Tomal
    *tomal123bd@gmail.com
    *facebook.com/tomal123
    *+8801737513080
*/
#include <stdio.h>
int main ()
{
    float a,b;
    int x;
    while (1){
        while (1){
            scanf ("%f",&a);
            if ()
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
        scanf("%d",&x);
        printf("media = %.2f\n",(a+b)/2);
        printf("novo calculo (1-sim 2-nao)\n");
        if (x<1 || x>2) printf("novo cálculo (1-sim 2-nao)\n");
        if (x==2) return 0;
    }
}
