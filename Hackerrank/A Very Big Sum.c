#include <stdio.h>
#include <string.h>
/*A Very Big Sum*/
void ar_eql(char n1[],char n2[]);
void s_strrev(char str[]);
void add(char n1[],char n2[],char n3[])
{

    int i,j,carry=0,n1_int,n2_int,result,re,point_location=-1,count; /*return value will return 0 if point location found in 0 index in the array*/
    char  temp,temp2;
    if (strlen(n1)!=strlen(n2)) ar_eql(n1,n2);
    for (i=strlen(n1)-1,j=0;i>=0;i--,j++){
        n1_int=(n1[i]-48)+carry;
        n2_int=n2[i]-48;
        result=n1_int+n2_int;
        if (result>=10){
            n3[j]=(result%10)+48;
            carry=1;
        }
        else {
            n3[j]=result+48;
            carry=0;
        }
    }
    if (carry==1) {
        n3[j]=carry+48;j++;
        n3[j]='\0';
    }
    else n3[j]='\0';
    s_strrev(n3);
    /*point checking*/
    j=strlen(n3);
    if (point_location!=-1){
        for (i=j,count=1;count<=point_location;i--,count++){
            n3[i+1]=n3[i];
        }
        n3[i+1]='.';
    }
}

void ar_eql(char n1[],char n2[])
{
    int n1_length=strlen(n1);
    int n2_length=strlen(n2);
    int length_re,i;
    if (n1_length>n2_length){
        length_re=n1_length-n2_length;
        for (i=(strlen(n2));i>=0;i--){
            n2[n1_length]=n2[i];
            n1_length--;
        }
        for (i=0;i<length_re;i++){
            n2[i]='0';
        }
    }
    else if (n1_length<n2_length) {
        length_re=n2_length-n1_length;
        for (i=(strlen(n1));i>=0;i--){
            n1[n2_length]=n1[i];
            n2_length--;
        }
        for (i=0;i<length_re;i++){
            n1[i]='0';
        }
    }
}
void s_strrev(char str[])
{
    int i, j = 0 , temp;
    i = 0;
    j = strlen(str) - 1;
    while (i < j) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
}
int main ()
{
    int n;
    char c;
    scanf ("%d",&n);
    scanf ("%c",&c);
    char A[n][1000];
    char temp[1000];
    strcpy(temp,"0");
    int i;
    for (i=0;i<n;i++){
        scanf("%s",A[i]);
        add(A[i],temp,A[n]);
        strcpy(temp,A[n]);
    }
    printf("%s",A[n]);
    return 0;
}
