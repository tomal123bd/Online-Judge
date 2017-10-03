/*
    *https://www.urionlinejudge.com.br/judge/en/problems/view/1153
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
    int i,f=1;
    for (i=1;i<=n;i++){
        f*=i;
    }
    printf("%d\n",f);
    return 0;
}
