/*
    *https://www.urionlinejudge.com.br/judge/en/problems/view/1557
    *Ashikur Rahman Tomal
    *tomal123bd@gmail.com
    *facebook.com/tomal123
    *+8801737513080
*/
#include <stdio.h>
#include <string.h>
int max_dgt(int a[][16],int n){
        int i,j,max=a[1][1];
        for (i=1;i<=n;i++){
            for (j=1;j<=n;j++){
                if (max<a[i][j]) max=a[i][j];
            }
        }
        i=0;
        int num=max;
        int dev,re;
        char str[100],temp;
        while (1){
            if (num<10){
                str[i]=num+48;
                str[i+1]='\0';
                break;
            }
            re=num%10;
            str[i]=re+48;
            num=num/10;
            i++;
        }
        for (i=0,j=strlen(str)-1;i<strlen(str)/2;i++,j--){
            temp=str[i];
            str[i]=str[j];
            str[j]=temp;
        }
        return strlen(str);
}
int cur_dgt(int num)
{
        int i=0,j;
        int dev,re;
        char str[100],temp;
        while (1){
            if (num<10){
                str[i]=num+48;
                str[i+1]='\0';
                break;
            }
            re=num%10;
            str[i]=re+48;
            num=num/10;
            i++;
        }
        for (i=0,j=strlen(str)-1;i<strlen(str)/2;i++,j--){
            temp=str[i];
            str[i]=str[j];
            str[j]=temp;
        }
        return strlen(str);
}
int main ()
{
    int n,i,j,k,l;
    int a[16][16];
    while (1){
        scanf("%d",&n);
        if (n==0) return 0;
        for (i=1,l=1;i<=n;i++,l*=2){
            for (j=1,k=l;j<=n;j++,k*=2){
                if (k==1) a[i][j]=1;
                else a[i][j]=k;
            }
        }
        int max=max_dgt(a,n),cur;
        for (i=1;i<=n;i++){
            for (j=1;j<=n;j++){
                if (j==1){
                    for (cur=cur_dgt(a[i][j]);cur<max;cur++){
                        printf(" ");
                    }printf("%d",a[i][j]);
                }
                else {
                    for (cur=cur_dgt(a[i][j]);cur<=max;cur++){
                        printf(" ");
                    }printf("%d",a[i][j]);
                }
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
