/*
    https://www.urionlinejudge.com.br/judge/en/problems/view/1914
    *Ashikur Rahman Tomal
    *tomal123bd@gmail.com
    *facebook.com/tomal123
    *+8801737513080
*/


#include <stdio.h>
#include <string.h>
int main ()
{
    long long QT,N,M;
    scanf ("%lld",&QT);
    char word[5][110],c;
    scanf ("%c",&c);
    while (QT--){
        scanf("%s",word[0]);
        scanf("%s",word[1]);
        scanf("%s",word[2]);
        scanf("%s",word[3]);
        scanf ("%lld %lld",&N,&M);
        if ((N+M)%2==0){
            if (!strcmp("PAR",word[1])){
                printf ("%s\n",word[0]);
            }
            else {
                printf ("%s\n",word[2]);
            }
        }
        else {
            if (!strcmp("IMPAR",word[1])){
                printf ("%s\n",word[0]);
            }
            else {
                printf ("%s\n",word[2]);
            }
        }
    }
    return 0;
}