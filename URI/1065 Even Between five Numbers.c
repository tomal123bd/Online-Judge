/*
    *https://www.urionlinejudge.com.br/judge/en/problems/view/1065
    *Ashikur Rahman Tomal
    *tomal123bd@gmail.com
    *facebook.com/tomal123
    *+8801737513080
*/

#include <stdio.h>
int main ()
{
    int num[5];
    int i,count=0;
    for (i=0;i<5;i++){
        scanf("%d",&num[i]);
        if (num[i]%2==0) count++;
    }
    printf("%d valores pares\n",count);
    return 0;
}
