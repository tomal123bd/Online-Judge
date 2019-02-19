/*
    https://www.urionlinejudge.com.br/judge/en/problems/view/1957    
    Ashikur Rahman Tomal
    tomal123bd@gmail.com
    facebook.com/tomal123
    +8801737513080
*/

#include <stdio.h>
#include <math.h>
#include <string.h>
void s_strrev(char hex[])
{
    int i,j;
    char temp;
    for (i=0,j=strlen(hex)-1;i<strlen(hex)/2;i++,j--){
        temp=hex[i];
        hex[i]=hex[j];
        hex[j]=temp;
    }
}
void to_hex(int num,char hex[])
{
    char ch;
    int re,j,i=0;
    while (num!=0){
        re=num%16;
        num=num/16;
        if (re>9){
            for (j=10,ch='A'-1;j<=re;j++) ch++;
            hex[i]=ch;
        }
        else hex[i]=re+48;
        i++;
    }
    hex[i]='\0';
    s_strrev(hex);
}
int main(void) {
     
    char hex[100];
    int num;
    scanf ("%d",&num);
    to_hex(num,hex);
    printf ("%s\n",hex);
    return 0;
}