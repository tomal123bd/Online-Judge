#include <stdio.h>
int main ()
{
    int input_line,i=1,j,sum=0;
    scanf ("%d",&input_line);
    char word[4];
    while (i<=input_line)
    {
        scanf ("%s",word);
        for (j=0;j<3;j++)
        {
            sum=sum+word[j];
        }
        printf ("%d\n",sum);
        sum=0;
        i++;
    }
    return 0;
}

