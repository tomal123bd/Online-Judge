#include <iostream>
using namespace std;

class maximum
{
public:

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

};

class minimum
{
public:

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
};

int check (int a[],int b)
{
    int i=0,ok;
    while (i<b)
    {
        if (a[i]>=0 && a[i]<=100)
        {
            ok=1;
        }
        else
        {
            ok=0;
            break;
        }
        i++;
    }
    return ok;
}

int main ()
{
    int a[5],b,c,input_line,i=1;
    maximum m;
    minimum m2;
    cin >> input_line;
    while (i<=input_line)
    {
        do
        {
            cin >> a[0] >> a[1] >> a[2] >> a[3] >> a[4];
        }while (check(a,5)==0);

        b=m.maxx(a,5);
        c=m2.minn(a,5);
        cout << c << " " << b;
        i++;
    }
    return 0;
}


// 01794 96 31 11  01796 00 01 24 n  01790 70 33 81
