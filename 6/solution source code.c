#include <stdio.h>

int maxx(int x[], int y)
        {
            int i,max_num=x[0];
            for (i=0;i<y;i++)
            {
                if (x[i]<max_num)
                {
                    max_num=x[i];
                }
            }
            return max_num;
        }


int minn(int x[], int y)
        {
            int i,max_num=x[0];
            for (i=0;i<y;i++)
            {
                if (x[i]>max_num)
                {
                    max_num=x[i];
                }
            }
            return max_num;
        }
int main()
{
    int a[5],b,c,input_line,i=1;
    scanf( "%d",&input_line);
    while (i<=input_line)
    {
        scanf("%d %d %d %d %d",&a[0],&a[1],&a[2],&a[3],&a[4]);
        b=maxx(a,5);
        c=minn(a,5);
        printf("%d %d\n",c,b);
        i++;
    }
    return 0;
}
