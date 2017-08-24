#include <stdio.h>
int main()
{
    int input_line,i=1;
    int num[10];
    int j,k,count=0,chk=0;
    scanf ("%d",&input_line);
    while (i<=input_line)
    {
        scanf("%d %d %d %d %d %d %d %d %d %d",&num[0],&num[1],&num[2],&num[3],&num[4],&num[5],&num[6],&num[7],&num[8],&num[9]);
        for (j=0;j<10;j++)
        {
            if (num[j]==1 || num[j]==0)
            {
                continue;
            }
            for (k=2;k<num[j];k++)
            {
                if (num[j]%k==0)
                {
                    chk=1;
                    break;
                }
            }
            if (chk==0 || num[j]==2)
            {
                count++;
            }
            chk=0;
        }
        printf("%d\n",count);
        count=0;
        i++;
    }
    return 0;

}
