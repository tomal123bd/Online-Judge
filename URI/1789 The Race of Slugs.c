/*
    *https://www.urionlinejudge.com.br/judge/en/problems/view/1789
    *Ashikur Rahman Tomal
    *tomal123bd@gmail.com
    *facebook.com/tomal123
    *+8801737513080
*/

#include <stdio.h>
int main ()
{
    int l,v,max;
    while(scanf("%d",&l)!=EOF){
        max=0;
        while(l--){
            scanf("%d",&v);
            if (max<v) max=v;
        }
        if (max<10) printf("1\n");
        if (max>=10 && max<20) printf("2\n");
        if (max>=20) printf("3\n");
    }
    return 0;
}
