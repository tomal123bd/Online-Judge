/*
    *https://www.urionlinejudge.com.br/judge/en/problems/view/1096
    *Ashikur Rahman Tomal
    *tomal123bd@gmail.com
    *facebook.com/tomal123
    *+8801737513080
*/

#include <stdio.h>
int main ()
{
    int i=1,j=7,k=1;
    while(i<=9){
        printf("I=%d J=%d\n",i,j);
        k++;j--;
        if (k>3){
            k=1;i+=2;j=7;
        }
    }
    return 0;
}
