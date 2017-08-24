/*
    *https://www.urionlinejudge.com.br/judge/en/problems/view/1044
    *Ashikur Rahman Tomal
    *tomal123bd@gmail.com
    *facebook.com/tomal123
    *+8801737513080
*/

#include <stdio.h>
#include <math.h>
int main ()
{
    double a[3],temp;
    scanf ("%lf %lf %lf",&a[0],&a[1],&a[2]);
    int i,j,n=3,flag1,flag2;
    if (n%2!=0){
        while(1){
            flag1=0;flag2=0;
            for (i=0;i<n-1;i=i+2){
                if (a[i]>a[i+1]){
                    temp=a[i];
                    a[i]=a[i+1];
                    a[i+1]=temp;
                    flag1=1;
                }
            }
            for (i=1;i<n;i=i+2){
                if (a[i]>a[i+1]){
                    temp=a[i];
                    a[i]=a[i+1];
                    a[i+1]=temp;
                    flag2=1;
                }
            }
            if (flag1==0&&flag2==0){
                break;
            }
        }
    }
    else{
        while (1){
            flag1=0;flag2=0;
            for (i=0;i<n;i=i+2){
                if (a[i]>a[i+1]){
                    temp=a[i];
                    a[i]=a[i+1];
                    a[i+1]=temp;
                    flag1=1;
                }
            }
            for (i=1;i<n-1;i=i+2){
                if (a[i]>a[i+1]){
                    temp=a[i];
                    a[i]=a[i+1];
                    a[i+1]=temp;
                    flag2=1;
                }
            }
            if (flag1==0&&flag2==0){
                break;
            }
        }
    }
    double A,B,C;
    A=a[2],B=a[1],C=a[0];
    if (A >= B + C) {
        printf("NAO FORMA TRIANGULO\n");
        return 0;
    }
    if (pow(A,2) == pow(B,2) + pow(C,2)) printf ("TRIANGULO RETANGULO\n");
    if (pow(A,2) > pow(B,2) + pow(C,2)) printf ("TRIANGULO OBTUSANGULO\n");
    if (pow(A,2) < pow(B,2) + pow(C,2)) printf ("TRIANGULO ACUTANGULO\n");
    if (A==B && B==C) printf ("TRIANGULO EQUILATERO\n");
    if (A==B && A!=C || A==C && A!=B || B==C && B!=A) printf ("TRIANGULO ISOSCELES\n");
    return 0;
}
