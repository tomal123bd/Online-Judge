#include <stdio.h>
int main ()
{
    int total_line,number,pos_num=0,neg_num=0,i=1;
    scanf ("%d",&total_line);
    while (total_line>=i)
    {
        scanf ("%d",&number);
        if (number>0)
        {
            pos_num++;
        }
        else if (number<0)
        {
            neg_num++;
        }
        i++;
    }
    printf ("%d %d",pos_num,neg_num);
    return 0;
}
