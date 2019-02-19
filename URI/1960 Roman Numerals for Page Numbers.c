/*
    https://www.urionlinejudge.com.br/judge/en/problems/view/1960
    Ashikur Rahman Tomal
    tomal123bd@gmail.com
    facebook.com/tomal123
    +8801737513080
*/
//1, V for 5, X for 10, L for 50, C for 100, D for 500 and M stands for 1000.
#include <stdio.h>
int main ()
{
    int n;
    scanf ("%d",&n);
    int i,d,r;
    while (n!=0){
        if (n>=1000){
            printf ("M");
            n=n-1000;
        }
        else if (n>=500){
            printf ("D");
            n=n-500;
        }
        else if (n>=100){
            printf ("C");
            n=n-100;
        }
        else if (n>=50){
            printf ("L");
            n=n-50;
        }
        else if (n>=10){
            printf ("X");
            n=n-10;
        }
        else if (n>=5){
            printf ("V");
            n=n-5;
        }
        else if (n>=1){
            printf ("I");
            n=n-1;
        }
    }
    printf ("\n");
    main ();
}