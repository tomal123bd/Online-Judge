/*
    https://www.urionlinejudge.com.br/judge/en/problems/view/1929
    *Ashikur Rahman Tomal
    *tomal123bd@gmail.com
    *facebook.com/tomal123
    *+8801737513080
*/

#include <stdio.h>
int check(int A,int B,int C)
{
    if (A+B>C && A+C>B && B+C>A) return 1;
    else return 0;
}
int main ()
{
    int A,B,C,D;
    scanf ("%d %d %d %d",&A,&B,&C,&D);
    if (check(A,B,C)){
        printf ("S\n");
        return 0;
    }
    if (check(A,B,D)){
        printf ("S\n");
        return 0;
    }
    if (check(B,C,D)){
        printf ("S\n");
        return 0;
    }
    if (check(A,C,D)){
        printf ("S\n");
        return 0;
    }
    printf ("N\n");
    return 0;
}