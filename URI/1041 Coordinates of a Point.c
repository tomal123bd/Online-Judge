/*
    *https://www.urionlinejudge.com.br/judge/en/problems/view/1041
    *Ashikur Rahman Tomal
    *tomal123bd@gmail.com
    *facebook.com/tomal123
    *+8801737513080
*/

#include <stdio.h>
int main ()
{
    float x,y;
    scanf ("%f %f",&x,&y);
    if (x==0 && y==0) printf ("Origem\n");
    if (x>0 && y>0) printf ("Q1\n");
    if (x<0 && y<0) printf ("Q3\n");
    if (x>0 && y<0) printf ("Q4\n");
    if (x<0 && y>0) printf ("Q2\n");
    if (x!=0 && y==0) printf ("Eixo X\n");
    if (x==0 && y!=0) printf ("Eixo Y\n");
    return 0;
}
