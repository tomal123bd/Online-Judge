/*
    *https://www.urionlinejudge.com.br/judge/en/problems/view/1154
    *Ashikur Rahman Tomal
    *tomal123bd@gmail.com
    *facebook.com/tomal123
    *+8801737513080
*/

#include <stdio.h>
int main ()
{
    int age,sum=0,i=0;
    while (1){
        scanf("%d",&age);
        if (age<0) {
            printf("%.2f\n",(float)sum/i);
            return 0;
        }
        sum+=age;
        i++;
    }
}
