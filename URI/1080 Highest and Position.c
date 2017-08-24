/*
    *https://www.urionlinejudge.com.br/judge/en/problems/view/1080
    *Ashikur Rahman Tomal
    *tomal123bd@gmail.com
    *facebook.com/tomal123
    *+8801737513080
*/

#include <stdio.h>
int main ()
{
    int num[100];
    int max,inp_pos;
    int i;
    scanf("%d",&num[0]);
    max=num[0];
    for (i=1;i<100;i++){
        scanf ("%d",&num[i]);
        if (max<num[i]) {
            inp_pos=i;
            max=num[i];
        }
    }
    printf("%d\n%d\n",max,inp_pos+1);
    return 0;
}
