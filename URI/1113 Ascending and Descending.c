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
    int X,Y;
    while (1){
        scanf ("%d %d",&X,&Y);
        if (X>Y) printf("Decrescente\n");
        else if (X==Y) return 0;
        else printf("Crescente\n");
    }
}
