#include <stdio.h>
#include <string.h>
int main ()
{
    int input_line,i=1,j,count=1;
    char num;
    char numbers[1000];
    scanf ("%d",&input_line);
    while (i<=input_line)
    {
        scanf ("%c",&num);
        gets(numbers);
        for (j=0;j<strlen(numbers);j++)
        {
            if (numbers[j]>=48 && numbers[j]<=57 || numbers[j]==45)
            {
                continue;
            }
            count++;
        }
        printf ("%d\n",count);
        i++;
        count=1;
    }
    return 0;
}
