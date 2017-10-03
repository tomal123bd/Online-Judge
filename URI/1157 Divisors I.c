/*
    *https://www.urionlinejudge.com.br/judge/en/problems/view/1157
    *Ashikur Rahman Tomal
    *tomal123bd@gmail.com
    *facebook.com/tomal123
    *+8801737513080
*/

#include <stdio.h>
int main ()
{
    int n;
    scanf("%d",&n);
    int i;
    for (i=1;i<=n;i++){
        if (n%i==0) printf("%d\n",i);
    }
    return 0;
}
