/*
    *https://www.urionlinejudge.com.br/judge/en/problems/view/1098
    *Ashikur Rahman Tomal
    *tomal123bd@gmail.com
    *facebook.com/tomal123
    *+8801737513080
*/
#include <iostream>
#include <stdio.h>
using namespace std;
int main ()
{
    float i=0,j,add=0.2;
    int k;
    while (true){
        for (k=1;k<=3;k++){
            j=k+i;
            cout << "I=" << i << " " << "J=" << j << endl;
        }
        i+=add;
        if (i>2.02) break;
    }
    return 0;
}
