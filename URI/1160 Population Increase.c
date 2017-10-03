/*
    *https://www.urionlinejudge.com.br/judge/en/problems/view/1160
    *Ashikur Rahman Tomal
    *tomal123bd@gmail.com
    *facebook.com/tomal123
    *+8801737513080
*/

#include <stdio.h>
int main ()
{
    int pa,pb,t,year=0;
    scanf("%d",&t);
    double g1,g2,ap,bp;
    while (t--){
        scanf("%d %d %lf %lf",&pa,&pb,&g1,&g2);
        g1=g1/100;
        g2=g2/100;
        while (1){
            ap=pa*g1;
            pa=pa+ap;
            bp=pb*g2;
            pb=pb+bp;
            year++;
            if (pa>pb || year>100) {
                if (year>100) printf("Mais de 1 seculo.\n");
                else printf("%d anos.\n",year);
                year=0;
                break;
            }
        }
    }
    return 0;
}
