#include <iostream>
using namespace std;
int sqt (long long num)
{
    long long i,chk=1;
    if (num==1)
    {
        return 0;
    }
    for (i=1;i<=num/2;i++)
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
    return 0;
}

int main ()
{
    int input_line,i=1;
    long long num;
    cin >> input_line;
    while (i<=input_line)
    {
        cin >> num;
        if (sqt(num)==1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        i++;
    }
    return 0;
}

