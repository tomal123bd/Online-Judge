#include <stdio.h>
int main ()
{
    float product[6]={0,4.00,4.50,5.00,2.00,1.50};
    int X,Y;
    scanf ("%d %d",&X,&Y);
    printf ("Total: R$ %.2f\n",product[X]*Y);
    return 0;
}
