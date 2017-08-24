/*
    *https://www.urionlinejudge.com.br/judge/en/problems/view/1097
    *Ashikur Rahman Tomal
    *tomal123bd@gmail.com
    *facebook.com/tomal123
    *+8801737513080
*/

#include <stdio.h>
int main ()
{
    int i=1,j=7,k=1,j1=7;
    while(i<=9){
        printf("I=%d J=%d\n",i,j);
        k++;j--;
        if (k>3){
            j1+=2;k=1;i+=2;j=j1;
        }
    }
    return 0;
}
