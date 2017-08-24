/*
    *https://www.urionlinejudge.com.br/judge/en/problems/view/1074
    *Ashikur Rahman Tomal
    *tomal123bd@gmail.com
    *facebook.com/tomal123
    *+8801737513080
*/

#include <stdio.h>
int main ()
{
    int N;
    scanf ("%d",&N);
    int X;
    int i;
    for (i=1;i<=N;i++){
        scanf ("%d",&X);
        if (X==0) printf("NULL\n");
        else if (X%2==0) {
            printf("EVEN ");
            if (X>0) printf("POSITIVE\n");
            else printf("NEGATIVE\n");
        }
        else {
            printf("ODD ");
            if (X>0) printf("POSITIVE\n");
            else printf("NEGATIVE\n");
        }
    }
    return 0;
}
