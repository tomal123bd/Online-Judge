#include <stdio.h>
int main ()
{
    int input_line,i=1,stu,j;
    double total=0;
    scanf ("%d",&input_line);
    while (i<=input_line)
    {
        scanf ("%d",&stu);
        int num[stu];
        for (j=0;j<stu;j++)
        {
            scanf ("%d",&num[j]);
            total=total+num[j];
        }
        printf ("%.2f\n",total/stu);
        i++;
        total=0;
    }
    return 0;
}
