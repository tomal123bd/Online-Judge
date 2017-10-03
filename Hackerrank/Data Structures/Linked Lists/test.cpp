#include <stdio.h>
#include <string.h>
int main ()
{
    int a[5]={1,3,5,7,9},b[5]={2,4,6,8,10},c[20];
    int i=0,j=0,k=0;
    for (k=0,i=0,j=0;k<10;k++){
        if (i==5) {
            c[k]=b[j];
            j++;continue;
        }
        else if (j==5){
            c[k]=a[i];//printf("adsf\n");
            i++;continue;
        }
        if (a[i]<b[j]){
            c[k]=a[i];
            i++;//printf("%d ",c[k]);
        }
        if (a[i]>b[j]){
            c[k]=b[j];
            j++;
        }
        //printf("%d ",i);
    }
    for (i=0;i<10;i++) printf("%d ",c[i]);

    /*int a[5]={1,2,3,4,5},b[4]={6,7,8,9},c[20];
    int i=0,j=0,k=0;
    while (1){
        if (a[i]==0 && b[j]==0) break;
        if (a[i]<b[j] || b[j]==0){
            c[k]=a[i];
            i++;k++;
        }printf("cool\n");
        if (a[i]>b[j] || a[i]==0){
            c[k]=b[j];
            j++;k++;
        }
    }
    for (i=0;i<k;i++) printf("%d ",c[i]);*/

    /*char a[]="13579",b[]="246",c[100];
    int i=0,j=0,k=0;
    while(1){
        if (a[i]=='\0' && b[j]=='\0') break;
        if (a[i]<b[j] || b[j]=='\0'){
            c[k]=a[i];
            i++;k++;
        }
        if (a[i]>b[j] || a[i]=='\0'){
            c[k]=b[j];
            j++;k++;
        }
    }
    c[k]='\0';
    printf("%s",c);*/
}
