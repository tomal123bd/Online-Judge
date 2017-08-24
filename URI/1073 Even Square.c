/*
    *https://www.urionlinejudge.com.br/judge/en/problems/view/1073
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
    for (i=1;i<=N;i++){
        if (i%2==0){
            printf("%d^2 = %d\n",i,i*i);
        }
    }
    return 0;
}
