#include <stdio.h>
int main ()
{
    int N;
    scanf("%d",&N);
    int h=0,m=0,s=0;
    while (1){
        if (N-3600>=0){
            h++;
            N=N-3600;
        }
        else break;
    }
    while (1){
        if (N-60>=0){
            m++;
            N=N-60;
        }
        else break;
    }
    s=N;
    printf ("%d:%d:%d\n",h,m,s);
    return 0;
}
