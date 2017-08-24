#include <stdio.h>
int main ()
{
    int input_line,x,y,z,i=1;
    scanf ("%d",&input_line);
    while (i<=input_line)
    {
        do{
            scanf ("%d %d %d",&x,&y,&z);
        }while (x<1 || x>100 || y<1 && y>100 || z<1 || z>100);
        printf ("%d\n",x*y*z);
        i++;
    }
    return 0;
}
