/*
    https://www.urionlinejudge.com.br/judge/en/problems/view/1866
    *Ashikur Rahman Tomal
    *tomal123bd@gmail.com
    *facebook.com/tomal123
    *+8801737513080
*/
#include <stdio.h>
int main ()
{
    int inp;
    scanf ("%d",&inp);
    int num;
    while (inp--){
        scanf ("%d",&num);
        if (num%2==0){
            printf ("0");
        }
        else{
            printf ("1");
        }
        printf ("\n");
    }
    return 0;
}