#include <stdio.h>
int sqt (int num)
{
    int i,chk=1;
    for (i=1;i<=num;i++)
    {
        chk=i*i;
        if (chk==num)
        {
            return 1;
            break;
        }
        else
        {
            continue;
        }
    }
    if (chk!=num)
    {
        return 0;
    }
}

int main ()
{
    int input_line,i=1;
    int num;
    scanf ("%d",&input_line);
    while (i<=input_line)
    {
        scanf ("%d",&num);
        if (sqt(num)==1)
        {
            printf ("YES\n");
        }
        else
        {
            printf ("NO\n");
        }
        i++;
    }
    return 0;
}
