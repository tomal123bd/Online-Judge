#include <stdio.h>

int main()
{
    double value;
    scanf ("%lf",&value);
    int n_100=0,n_50=0,n_20=0,n_10=0,n_5=0,n_2=0;
    int c_1=0,c_50=0,c_25=0,c_10=0,c_05=0,c_01=0;

    value=value*100;

    while (1){
        if (value-100*100>=0){
            n_100++;
            value=value-100*100;
        }
        else break;
    }
    while (1){
        if (value-50*100>=0){
            n_50++;
            value=value-50*100;
        }
        else break;
    }
    while (1){
        if (value-20*100>=0){
            n_20++;
            value=value-20*100;
        }
        else break;
    }
    while (1){
        if (value-10*100>=0){
            n_10++;
            value=value-10*100;
        }
        else break;
    }
    while (1){
        if (value-5*100>=0){
            n_5++;
            value=value-5*100;
        }
        else break;
    }
    while (1){
        if (value-2*100>=0){
            n_2++;
            value=value-2*100;
        }
        else break;
    }

    double v=0.00;

    while (1){
        if (value-1*100>=v){
            c_1++;
            value=value-1*100;
        }
        else break;
    }
    while (1){
        if (value-0.50*100>=v){
            c_50++;
            value=value-0.50*100;
        }
        else break;
    }
    while (1){
        if (value-0.25*100>=v){
            c_25++;
            value=value-0.25*100;
        }
        else break;
    }
    while (1){
        if (value-0.10*100>=v){
            c_10++;
            value=value-0.10*100;
        }
        else break;
    }
    while (1){
        if (value-0.05*100>=v){
            c_05++;
            value=value-0.05*100;
        }
        else break;
    }

    while (1){
        if (value-0.01*100>=v){
            c_01++;
            value=value-0.01*100;
        }
        else break;
    }
    printf ("NOTAS:\n%d nota(s) de R$ 100.00\n%d nota(s) de R$ 50.00\n%d nota(s) de R$ 20.00\n%d nota(s) de R$ 10.00\n%d nota(s) de R$ 5.00\n%d nota(s) de R$ 2.00\n",n_100,n_50,n_20,n_10,n_5,n_2);
    printf ("MOEDAS:\n%d moeda(s) de R$ 1.00\n%d moeda(s) de R$ 0.50\n%d moeda(s) de R$ 0.25\n%d moeda(s) de R$ 0.10\n%d moeda(s) de R$ 0.05\n%d moeda(s) de R$ 0.01\n",c_1,c_50,c_25,c_10,c_05,c_01);
    return 0;
}
