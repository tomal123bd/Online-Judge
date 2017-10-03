/*
    *https://www.urionlinejudge.com.br/judge/en/problems/view/1134
    *Ashikur Rahman Tomal
    *tomal123bd@gmail.com
    *facebook.com/tomal123
    *+8801737513080
*/

#include <stdio.h>
int main ()
{
    int Alcohol=0,Gasoline=0,Diesel=0;
    int n;
    scanf("%d",&n);
    while (n!=4){
        scanf("%d",&n);
        if (n>4){
            while(1){
                scanf("%d",&n);
                if (n<=4) break;
            }
        }
        if (n==1) Alcohol++;
        if (n==2) Gasoline++;
        if (n==3) Diesel++;
    }
    printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d\n",Alcohol,Gasoline,Diesel);
    return 0;
}
