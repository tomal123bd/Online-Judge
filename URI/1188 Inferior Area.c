/*
    *https://www.urionlinejudge.com.br/judge/en/problems/view/1188
    *Ashikur Rahman Tomal
    *tomal123bd@gmail.com
    *facebook.com/tomal123
    *+8801737513080
*/

#include <stdio.h>
int main ()
{
    double m[12][12],sum=0;
    int i,j,k,l,c=0;
    char t;
    scanf("%c",&t);
    for (i=0;i<12;i++){
        for (j=0;j<12;j++) scanf("%lf",&m[i][j]);
    }
    for (i=0,k=0,l=11;i<12;i++,k++,l--){
        for (j=0;j<12;j++){
            if (l<j && j<k) sum+=m[i][j];
        }
    }
    if (t=='S') printf("%.1lf\n",sum);
    else printf("%.1lf\n",sum/30);
    return 0;
}
