/*
	https://www.urionlinejudge.com.br/judge/en/problems/view/1847
	*Ashikur Rahman Tomal
	*tomal123bd@gmail.com
	*facebook.com/tomal123
	*+8801737513080
*/
#include <stdio.h>
#include <math.h>
int main ()
{
    int A,B,C;
    scanf ("%d %d %d",&A,&B,&C);
    if (A>B && B<=C){
        printf (":)");
    }
    else if (A<B && B>=C){
        printf (":(");
    }
    else if (A<B && B<C && (C-B)<(B-A)){
        printf (":(");
    }
    else if (A<B && B<C && (C-B)>=(B-A)){
        printf (":)");
    }
    else if (A>B && B>C && (A-B)>(B-C)){
        printf (":)");
    }
    else if (A>B && B>C && (A-B)<=(B-C)){
        printf (":(");
    }
    else if (A==B){
        if (B<C){
            printf (":)");
        }
        else{
            printf (":(");
        }
    }
    printf ("\n");
    return 0;
}