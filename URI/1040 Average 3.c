/*
    *https://www.urionlinejudge.com.br/judge/en/problems/view/1040
    *Ashikur Rahman Tomal
    *tomal123bd@gmail.com
    *facebook.com/tomal123
    *+8801737513080
*/

#include <stdio.h>
int main ()
{
    float N1,N2,N3,N4,N5;
    scanf ("%f %f %f %f",&N1,&N2,&N3,&N4);
    int w=2+3+4+1;
    N1=N1*2,N2=N2*3,N3=N3*4,N4=N4*1;
    float sum=N1+N2+N3+N4;
    float avg=sum/w;
    printf("Media: %.1f\n",avg);
    if(avg>=7.0) printf ("Aluno aprovado.\n");
    if (avg<5.0) printf ("Aluno reprovado.\n");
    if (avg>=5.0 && avg<=6.9) {
        printf("Aluno em exame.\n");
        scanf ("%f",&N5);
        printf ("Nota do exame: %.1f\n",N5);
        avg=(avg+N5)/2;
        if (avg>=5) {
             printf("Aluno aprovado.\n");
             printf("Media final: %.1f\n",avg);
        }
        if (avg<=4.9) {
            printf ("Aluno reprovado.\n");
            printf("Media final: %.1f\n",avg);
        }
    }
    return 0;
}
