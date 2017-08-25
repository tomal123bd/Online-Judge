/*
    *
    *Ashikur Rahman Tomal
    *tomal123bd@gmail.com
    *facebook.com/tomal123
    *+8801737513080
*/

#include <stdio.h>
int main ()
{
    int test,pass=2002;
    while (1){
        scanf ("%d",&test);
        if (pass!=test) printf ("Senha Invalida\n");
        else {
            printf ("Acesso Permitido\n");
            return 0;
        }
    }
}
