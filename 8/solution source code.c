#include <stdio.h>
int main ()
{
    int input_line,i,num[5],av;
    scanf ("%d",&input_line);
    for (i=1;i<=input_line;i++)
    {
        scanf ("%d %d %d %d %d",&num[0],&num[1],&num[2],&num[3],&num[4]);
        printf ("%d\n",(num[0]+num[1]+num[2]+num[3]+num[4])/5);
    }
    return 0;
}
