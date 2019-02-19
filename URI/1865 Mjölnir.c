/*
    *https://www.urionlinejudge.com.br/judge/en/problems/view/1789
    *Ashikur Rahman Tomal
    *tomal123bd@gmail.com
    *facebook.com/tomal123
    *+8801737513080
*/
/*
    #python >>>
    inp=int(input())
    str=None
    while(inp!=0):
        str=input()
        if "Thor" in str:
            print ("Y")
        else:
            print ("N")
        inp-=1
*/
#include <stdio.h>
#include <string.h>
int main() {

    int inp,i,flag=0;
    scanf ("%d",&inp);
    char str[50],Thor[]={'T','h','o','r'},c;
    scanf("%c",&c);
    while (inp--){
        gets(str);
        for (i=0;i<4;i++){
            if (str[i]!=Thor[i]){
                printf ("N\n");
                flag=1;
                break;
            }
        }
        if (flag==0){
            printf ("Y\n");
        }
        flag=0;
    }
    return 0;
}
