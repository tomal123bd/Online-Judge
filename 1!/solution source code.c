#include <stdio.h>
int main ()
{
    int x,y,z;
    while (scanf("%d %d",&x,&y)!=EOF)
    {
        z=x+y;
        printf ("%d\n",z);
    }
    return 0;
}
