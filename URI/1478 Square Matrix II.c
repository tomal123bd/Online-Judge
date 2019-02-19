/*
    *https://www.urionlinejudge.com.br/judge/en/problems/view/1478
    *Ashikur Rahman Tomal
    *tomal123bd@gmail.com
    *facebook.com/tomal123
    *+8801737513080
*/

#include <stdio.h>
int main ()
{
    int n,i,j,k,l=1;
    while(1){
        scanf("%d",&n);
        int a[n+1][n+1];
        if (n==0) break;
        for (i=1;i<=n;i++){
            for (j=1,k=i;j<=n;j++){
                if (k==1) {
                    a[i][j]=l;
                    l++;
                }
                else {
                    a[i][j]=k;
                    k--;
                }
            }
            l=1;
        }
        for (i=1;i<=n;i++){
            for (j=1;j<=n;j++){
                if (j==1) printf("%3d",a[i][j]);
                else printf(" %3d",a[i][j]);
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
