#include <stdio.h>
int main ()
{
    int days;
    scanf ("%d",&days);
    int y=0,m=0,d=0;
    while (1){
        if (days-365>=0){
            y++;
            days=days-365;
        }
        else break;
    }
    while (1){
        if (days-30>=0){
            m++;
            days=days-30;
        }
        else break;
    }
    d=days;
    printf ("%d ano(s)\n%d mes(es)\n%d dia(s)\n",y,m,d);
    return 0;
}
