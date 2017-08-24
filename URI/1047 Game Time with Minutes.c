/*
    *https://www.urionlinejudge.com.br/judge/en/problems/view/1047
    *Ashikur Rahman Tomal
    *tomal123bd@gmail.com
    *facebook.com/tomal123
    *+8801737513080
*/

#include <stdio.h>
int main ()
{
    int s_h,s_m,e_h,e_m,temp,h,m;
    scanf ("%d %d %d %d",&s_h,&s_m,&e_h,&e_m);
    int t_s_m=s_h*60+s_m;
    int t_e_m=e_h*60+e_m;
    if (t_s_m>=t_e_m) {
        temp=(t_e_m+(24*60))-t_s_m;
        h=temp/60;
        m=temp%60;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",h,m);
    }
    else {
        temp=t_e_m-t_s_m;
        h=temp/60;
        m=temp%60;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",h,m);
    }
    return 0;
}
