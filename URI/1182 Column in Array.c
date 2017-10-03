/*
    *https://www.urionlinejudge.com.br/judge/en/problems/view/1182
    *Ashikur Rahman Tomal
    *tomal123bd@gmail.com
    *facebook.com/tomal123
    *+8801737513080
*/

#include <stdio.h>
int main ()
{
    float m,sum=0,f;
    int l,i,j;
    char t;
    scanf("%d",&l);
    scanf("%c",&t);
    scanf("%c",&t);
    for (i=0;i<12;i++){
        for (j=0;j<12;j++){
            if (j==l) {
                scanf("%f",&m);
                sum+=m;
            }
            else scanf("%f",&f);
        }
    }
    if (t=='S') printf("%.1f\n",sum);
    else printf("%.1f\n",sum/12);
    return 0;
}
