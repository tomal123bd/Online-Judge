/*
    *https://www.urionlinejudge.com.br/judge/en/problems/view/1158
    *Ashikur Rahman Tomal
    *tomal123bd@gmail.com
    *facebook.com/tomal123
    *+8801737513080
*/

#include <stdio.h>
int main ()
{
    int n,x,y,i,count,sum;
    scanf("%d",&n);
    while(n--){
        count=1;
        sum=0;
        scanf("%d %d",&x,&y);
        for (i=x;y>=count;i++){
            if (i%2!=0) {
                sum+=i;
                count++;
            }
        }
        printf("%d\n",sum);
    }
    return 0;
}
