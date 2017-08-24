/*
    *https://www.urionlinejudge.com.br/judge/en/problems/view/1061
    *Ashikur Rahman Tomal
    *tomal123bd@gmail.com
    *facebook.com/tomal123
    *+8801737513080
*/

#include <stdio.h>
#include <string.h>

struct time{
    int day;
    int hour;
    int min;
    int sec;
};

int extract_int_values (char input_string[],int int_values[])
{
    int i,j=0,f=0,flag=0;
    char temp[10];
    for (i=0;i<=strlen(input_string);i++){
        if (input_string[i]>=48 && input_string[i]<=57){
            temp[j]=input_string[i]; j++; flag=1;
            continue;
        }
        if (flag==1){
            temp[j]='\0'; j=0;
            int_values[f]=atoi(temp); f++; flag=0;
        }
    }
    return f;
}

int main ()
{
    struct time start, end, interval;
    int inp[4],found,flag=0;
    char get_input[20],get1[15],get2[15];
    strcpy(get_input,"");
    gets(get1);
    gets(get2);
    strcat(get_input,get1);strcat(get_input," ");strcat(get_input,get2);
    found=extract_int_values (get_input,inp);
    start.day=inp[0];
    start.hour=inp[1];
    start.min=inp[2];
    start.sec=inp[3];
    strcpy(get_input,"");
    gets(get1);
    gets(get2);
    strcat(get_input,get1);strcat(get_input," ");strcat(get_input,get2);
    found=extract_int_values (get_input,inp);
    end.day=inp[0];
    end.hour=inp[1];
    end.min=inp[2];
    end.sec=inp[3];
    if (end.sec<start.sec){
        end.sec=end.sec+60;
        flag=1;
    }
    interval.sec=end.sec-start.sec;
    if (flag==1) {
        start.min++;
        flag=0;
    }
    if (end.min<start.min) {
        end.min=end.min+60;
        flag=1;
    }
    interval.min=end.min-start.min;
    if (flag==1) {
        start.hour++;
        flag=0;
    }
    if (end.hour<start.hour) {
        end.hour=end.hour+24;
        flag=1;
    }
    interval.hour=end.hour-start.hour;
    if (flag==1) start.day++;
    interval.day=end.day-start.day;
    printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n",interval.day,interval.hour,interval.min,interval.sec);
    return 0;
}
