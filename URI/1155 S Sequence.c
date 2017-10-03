/*
    *https://www.urionlinejudge.com.br/judge/en/problems/view/1155
    *Ashikur Rahman Tomal
    *tomal123bd@gmail.com
    *facebook.com/tomal123
    *+8801737513080
*/

#include <stdio.h>
int main ()
{
    double S=0;
    int i=1;
    while(i<=100){
        S=S+((float)1/i);
        i++;
    }
    printf("%.2f\n",S);
    return 0;
}
