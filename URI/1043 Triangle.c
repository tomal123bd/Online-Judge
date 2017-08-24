/*

    *https://www.urionlinejudge.com.br/judge/en/problems/view/1043

    *Ashikur Rahman Tomal
    *tomal123bd@gmail.com
    *facebook.com/tomal123
    *+8801737513080

*/

#include <stdio.h>
int main ()
{
    float A,B,C;
    scanf("%f %f %f",&A,&B,&C);
    if (A+B>C && A+C>B && B+C>A) {
        printf("Perimetro = %.1f\n",A+B+C);
    }
    else{
        printf("Area = %.1f\n",((A+B)/2)*C);
    }
    return 0;
}
