/*
    *https://www.urionlinejudge.com.br/judge/en/problems/view/1071
    *Ashikur Rahman Tomal
    *tomal123bd@gmail.com
    *facebook.com/tomal123
    *+8801737513080
*/

#include <stdio.h>
int main ()
{
    int num1,num2;
    scanf ("%d %d",&num1,&num2);
    int i,sum=0;
    for (i=num2+1;i<num1;i++){
        if (i%2!=0) sum=sum+i;
    }
    printf("%d\n",sum);
    return 0;
}
