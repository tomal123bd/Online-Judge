/*
    *https://www.urionlinejudge.com.br/judge/en/problems/view/1050
    *Ashikur Rahman Tomal
    *tomal123bd@gmail.com
    *facebook.com/tomal123
    *+8801737513080
*/


#include <stdio.h>
int main ()
{
    struct phone_dialing {
        int DDD;
        char *Destination;
    };
    struct phone_dialing input[8];
    int i=0,num,flag=0;
    char c;
    scanf ("%d",&num);
    input[i].DDD=61;
    input[i].Destination="Brasilia";
    i++;

    input[i].DDD=71;
    input[i].Destination="Salvador";
    i++;

    input[i].DDD=11;
    input[i].Destination="Sao Paulo";
    i++;

    input[i].DDD=21;
    input[i].Destination="Rio de Janeiro";
    i++;

    input[i].DDD=32;
    input[i].Destination="Juiz de Fora";
    i++;

    input[i].DDD=19;
    input[i].Destination="Campinas";
    i++;

    input[i].DDD=27;
    input[i].Destination="Vitoria";
    i++;

    input[i].DDD=31;
    input[i].Destination="Belo Horizonte";
    i++;

    for (i=0;i<8;i++){
        if (input[i].DDD==num) {
            printf("%s\n",input[i].Destination);
            flag=1;
            break;
        }

    }
    if (flag==0) printf("DDD nao cadastrado\n");
    return 0;
}
