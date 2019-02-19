/*
    *https://www.urionlinejudge.com.br/judge/en/problems/view/1534
    *Ashikur Rahman Tomal
    *tomal123bd@gmail.com
    *facebook.com/tomal123
    *+8801737513080
*/

#include <stdio.h>
int main ()
{
    int n,i,j,k;
    while (scanf("%d",&n)!=EOF){
        for (i=1,k=n;i<=n;i++,k--){
            for (j=1;j<=n;j++){
                if (j==k) printf("2");
                else if (j==i) printf("1");
                else if (j==k) printf("2");
                else printf("3");
            }
            printf("\n");
        }
    }
    return 0;
}
