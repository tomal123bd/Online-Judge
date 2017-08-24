/*
    *https://www.urionlinejudge.com.br/judge/en/problems/index/1?page=3
    *Ashikur Rahman Tomal
    *tomal123bd@gmail.com
    *facebook.com/tomal123
    *+8801737513080
*/

#include <stdio.h>
int main ()
{
    int N;
    scanf ("%d",&N);
    int i;
    for (i=1;i<=10000;i++){
        if (i%N==2) printf("%d\n",i);
    }
    return 0;
}
