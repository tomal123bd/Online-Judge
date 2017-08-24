/*
    *https://www.urionlinejudge.com.br/judge/en/problems/view/1042

    *Ashikur Rahman Tomal
    *tomal123bd@gmail.com
    *facebook.com/tomal123
    *+8801737513080
*/

#include <stdio.h>
int main ()
{

    int a[3],b[3];
    scanf ("%d %d %d",&a[0],&a[1],&a[2]);
    b[0]=a[0],b[1]=a[1],b[2]=a[2];
    int i,j,temp,n=3,flag1,flag2;
    if (n%2!=0){
        while(1){
            flag1=0;flag2=0;
            for (i=0;i<n-1;i=i+2){
                if (a[i]>a[i+1]){
                    temp=a[i];
                    a[i]=a[i+1];
                    a[i+1]=temp;
                    flag1=1;
                }
            }
            for (i=1;i<n;i=i+2){
                if (a[i]>a[i+1]){
                    temp=a[i];
                    a[i]=a[i+1];
                    a[i+1]=temp;
                    flag2=1;
                }
            }
            if (flag1==0&&flag2==0){
                break;
            }
        }
    }
    else{
        while (1){
            flag1=0;flag2=0;
            for (i=0;i<n;i=i+2){
                if (a[i]>a[i+1]){
                    temp=a[i];
                    a[i]=a[i+1];
                    a[i+1]=temp;
                    flag1=1;
                }
            }
            for (i=1;i<n-1;i=i+2){
                if (a[i]>a[i+1]){
                    temp=a[i];
                    a[i]=a[i+1];
                    a[i+1]=temp;
                    flag2=1;
                }
            }
            if (flag1==0&&flag2==0){
                break;
            }
        }
    }
    for (i=0;i<n;i++)
    {
        printf ("%d\n",a[i]);
    }
    printf("\n");
    for (i=0;i<n;i++)
    {
        printf ("%d\n",b[i]);
    }
    return 0;
}
