/*
    *https://www.urionlinejudge.com.br/judge/en/problems/view/1052
    *Ashikur Rahman Tomal
    *tomal123bd@gmail.com
    *facebook.com/tomal123
    *+8801737513080
*/

#include <stdio.h>
int main ()
{
    char month[12][10]={"January","February","March","April","May","June","July","August","September","October","November","December"};
    int num;
    scanf ("%d",&num);
    printf("%s\n",month[num-1]);
    return 0;
}
