/*
    *https://www.urionlinejudge.com.br/judge/en/problems/view/1064
    *Ashikur Rahman Tomal
    *tomal123bd@gmail.com
    *facebook.com/tomal123
    *+8801737513080
*/

#include <stdio.h>
int main ()
{
    float num[6],sum=0;
    int i,count=0;
    for (i=0;i<6;i++){
        scanf("%f",&num[i]);
        if (num[i]>=0) {
            sum=sum+num[i];
            count++;
        }
    }
    printf("%d valores positivos\n%.1f\n",count,sum/count);
    return 0;
}
