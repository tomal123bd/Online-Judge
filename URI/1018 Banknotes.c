/*need some edit*/

#include <stdio.h>
int main ()
{
    int note[][1000]={{100,1000000},{50,1000000},{20,1000000},{10,1000000},{5,1000000},{2,1000000},{1,1000000}};
    int pay_note[][1000]={{100,0},{50,0},{20,0},{10,0},{5,0},{2,0},{1,0}};
    int cost;
    scanf ("%d",&cost);
    int i,j,sum=0;
    for (i=0;i<7;){
        if (note[i][1]==0){
            i++;
            continue;
        }
        if (sum+note[i][0]>cost){
            i++;
        }
        else {
            sum=sum+note[i][0];
            pay_note[i][1]++;
            note[i][1]--;
        }
    }
    printf ("%d\n",cost);
    for (i=0;i<7;i++){
        //printf ("%d %d\n",pay_note[i][0],pay_note[i][1]);
        printf("%d nota(s) de R$ %d,00\n",pay_note[i][1],pay_note[i][0]);
    }
    return 0;
}
