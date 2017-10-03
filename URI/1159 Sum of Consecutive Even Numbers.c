/*
    *https://www.urionlinejudge.com.br/judge/en/problems/view/1159
    *Ashikur Rahman Tomal
    *tomal123bd@gmail.com
    *facebook.com/tomal123
    *+8801737513080
*/

#include <stdio.h>
int main ()
{
    int x,y=5,i,count,sum;
    while(1){
        scanf("%d",&x);
        if (x==0) return 0;
        count=1;
        sum=0;
        for (i=x;y>=count;i++){
            if (i%2==0) {
                sum+=i;
                count++;
            }
        }
        printf("%d\n",sum);
    }
}
