/*
    *
    *Ashikur Rahman Tomal
    *tomal123bd@gmail.com
    *facebook.com/tomal123
    *+8801737513080
*/

#include <stdio.h>
int main ()
{
    int X;
    scanf ("%d",&X);
    int i,count=1;
    for (i=X;1;i++){
        if (count>6) break;
        if (i%2!=0) {
            printf("%d\n",i);
            count++;
        }
        if (count>6) break;
    }
    return 0;
}
