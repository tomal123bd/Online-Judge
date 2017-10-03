/*
    *https://www.urionlinejudge.com.br/judge/en/problems/view/1156
    *Ashikur Rahman Tomal
    *tomal123bd@gmail.com
    *facebook.com/tomal123
    *+8801737513080
*/

#include <stdio.h>
int main ()
{
    double S=0,j=2;
    int i=3;
    while(i<=39){
        S+=i/j;
        i+=2;
        j*=2;
    }
    printf("%.2lf\n",S+1);
    return 0;
}
