/*
    *https://www.urionlinejudge.com.br/judge/en/problems/view/1142
    *Ashikur Rahman Tomal
    *tomal123bd@gmail.com
    *facebook.com/tomal123
    *+8801737513080
*/

#include <stdio.h>
int main ()
{
    int N;
    scanf("%d",&N);
    int i,j=1;
    for (i=1;i<=N;i++){
        printf("%d ",j);j++;
        printf("%d ",j);j++;
        printf("%d ",j);
        printf("PUM\n");j+=2;
    }
    return 0;
}
