/*
    *https://www.urionlinejudge.com.br/judge/en/problems/view/1051
    *Ashikur Rahman Tomal
    *tomal123bd@gmail.com
    *facebook.com/tomal123
    *+8801737513080
*/

#include <stdio.h>
int main ()
{
    float salary,remaining,tax=0;
    scanf ("%f",&salary);
    if (salary>=0 && salary<=2000) {
        printf("Isento\n");
        return 0;
    }
    if (salary>=2000.01){
        if (salary>3000){
            tax=tax+(1000*.08);
        }
        else {
            remaining=salary-2000;
            tax=tax+(remaining*.08);
        }
    }
    if (salary>=3000.01){
        if (salary>4500){
            tax=tax+(1500*.18);
        }
        else {
            remaining=salary-(2000+1000);
            tax=tax+(remaining*.18);
        }
    }
    if (salary>4500){
        remaining=salary-(2000+1000+1500);
        tax=tax+(remaining*.28);
    }
    printf("R$ %.2f\n",tax);
    return 0;
}
