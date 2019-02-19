/*
    *https://www.urionlinejudge.com.br/judge/en/problems/view/1435
    *Ashikur Rahman Tomal
    *tomal123bd@gmail.com
    *facebook.com/tomal123
    *+8801737513080
*/

#include <stdio.h>
int main ()
{
    int n;
    while(1){
        scanf("%d",&n);
        if (n==0) return 0;
        int a[n][n],i,j,k=0,l=n-1,count=n/2+1;
        while (count--){
            for (i=k;i<n-k;i++){
                for (j=k;j<n-k;j++){
                    if (i==k || j==l || i==l || j==k) a[i][j]=k+1;
                }
            }
            k++;l--;
        }
        for (i=0;i<n;i++){
            for (j=0;j<n;j++){
                if (j==0) printf("%3d",a[i][j]);
                else printf(" %3d",a[i][j]);
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
