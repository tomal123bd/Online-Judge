/*
    *https://www.urionlinejudge.com.br/judge/en/problems/view/1541
    *Ashikur Rahman Tomal
    *tomal123bd@gmail.com
    *facebook.com/tomal123
    *+8801737513080
*/

#include <stdio.h>
int main ()
{
    float a,b,c,count,value,area;
    while (1){
        scanf("%f",&a);
        if (a==0) return 0;
        scanf("%f",&b);
        scanf("%f",&c);
        count=0;
        area=((float)a*b)*((float)100/c);
        while (1){
            count++;
            if (count*count<=area) value=count;
            else break;
        }
        printf("%.0f\n",value);
    }
    return 0;
}
