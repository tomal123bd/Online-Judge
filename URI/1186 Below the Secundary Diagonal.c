/*
    *https://www.urionlinejudge.com.br/judge/en/problems/view/1186
    *Ashikur Rahman Tomal
    *tomal123bd@gmail.com
    *facebook.com/tomal123
    *+8801737513080
*/

#include <stdio.h>
int main ()
{
    float m[12][12],sum=0;
    int i,j,k;
    char t;
    scanf("%c",&t);
    for (i=0;i<12;i++){
        for (j=0;j<12;j++) scanf("%f",&m[i][j]);
    }
    for (i=0,k=11;i<12;i++,k--){
        for (j=0;j<12;j++){
            if (k<j) sum+=m[i][j];
        }
    }
    if (t=='S') printf("%.1f\n",sum);
    else printf("%.1f\n",sum/66);
    return 0;
}
