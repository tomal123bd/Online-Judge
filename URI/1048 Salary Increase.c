/*
    *https://www.urionlinejudge.com.br/judge/en/problems/view/1048
    *Ashikur Rahman Tomal
    *tomal123bd@gmail.com
    *facebook.com/tomal123
    *+8801737513080
*/

#include <stdio.h>
int main ()
{
    double s;
    scanf ("%lf",&s);
    if (s>=0 && s<=400.00) printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 15 %%\n",s+(s*.15),s*.15);
    if (s>=400.01 && s<=800.00) printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 12 %%\n",s+(s*.12),s*.12);
    if (s>=800.01 && s<=1200.00) printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 10 %%\n",s+(s*.10),s*.10);
    if (s>=1200.01 && s<=2000.00) printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 7 %%\n",s+(s*.07),s*.07);
    if (s>2000.00) printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 4 %%\n",s+(s*.04),s*.04);
    return 0;
}
