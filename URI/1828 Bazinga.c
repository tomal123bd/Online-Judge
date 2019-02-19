#include <stdio.h>
#include <string.h>
void rep(char in[])
{
    if (strcmp(in,"pedra")==0){
        strcpy(in,"rock");
    }
    if (strcmp(in,"papel")==0){
        strcpy(in,"paper");
    }
    if (strcmp(in,"tesoura")==0){
        strcpy(in,"scissors");
    }
    if (strcmp(in,"lagarto")==0){
        strcpy(in,"lizard");
    }
    if (strcmp(in,"Spock")==0){
        strcpy(in,"Spock");
    }
}
int main ()
{
    int inp,i;
    scanf ("%d",&inp);
    char sheldon[20],raj[20],c;
    for (i=1;i<=inp;i++){
        scanf ("%c",&c);
        scanf ("%s %s",sheldon,raj);
        rep(sheldon);
        rep(raj);
        if (strcmp(sheldon,"scissors")==0 && strcmp(raj,"paper")==0){
            printf ("Caso #%d: Bazinga!",i);
        }
        else if (strcmp(sheldon,"paper")==0 && strcmp(raj,"scissors")==0){
            printf ("Caso #%d: Raj trapaceou!",i);
        }
        else if (strcmp(sheldon,"paper")==0 && strcmp(raj,"rock")==0){
            printf ("Caso #%d: Bazinga!",i);
        }
        else if (strcmp(sheldon,"rock")==0 && strcmp(raj,"paper")==0){
            printf ("Caso #%d: Raj trapaceou!",i);
        }
        else if (strcmp(sheldon,"rock")==0 && strcmp(raj,"lizard")==0){
            printf ("Caso #%d: Bazinga!",i);
        }
        else if (strcmp(sheldon,"lizard")==0 && strcmp(raj,"rock")==0){
            printf ("Caso #%d: Raj trapaceou!",i);
        }
        else if (strcmp(sheldon,"lizard")==0 && strcmp(raj,"Spock")==0){
            printf ("Caso #%d: Bazinga!",i);
        }
        else if (strcmp(sheldon,"Spock")==0 && strcmp(raj,"lizard")==0){
            printf ("Caso #%d: Raj trapaceou!",i);
        }
        else if (strcmp(sheldon,"Spock")==0 && strcmp(raj,"scissors")==0){
            printf ("Caso #%d: Bazinga!",i);
        }
        else if (strcmp(sheldon,"scissors")==0 && strcmp(raj,"Spock")==0){
            printf ("Caso #%d: Raj trapaceou!",i);
        }
        else if (strcmp(sheldon,"scissors")==0 && strcmp(raj,"lizard")==0){
            printf ("Caso #%d: Bazinga!",i);
        }
        else if (strcmp(sheldon,"lizard")==0 && strcmp(raj,"scissors")==0){
            printf ("Caso #%d: Raj trapaceou!",i);
        }
        else if (strcmp(sheldon,"lizard")==0 && strcmp(raj,"paper")==0){
            printf ("Caso #%d: Bazinga!",i);
        }
        else if (strcmp(sheldon,"paper")==0 && strcmp(raj,"lizard")==0){
            printf ("Caso #%d: Raj trapaceou!",i);
        }
        else if (strcmp(sheldon,"paper")==0 && strcmp(raj,"Spock")==0){
            printf ("Caso #%d: Bazinga!",i);
        }
        else if (strcmp(sheldon,"Spock")==0 && strcmp(raj,"paper")==0){
            printf ("Caso #%d: Raj trapaceou!",i);
        }
        else if (strcmp(sheldon,"Spock")==0 && strcmp(raj,"rock")==0){
            printf ("Caso #%d: Bazinga!",i);
        }
        else if (strcmp(sheldon,"rock")==0 && strcmp(raj,"Spock")==0){
            printf ("Caso #%d: Raj trapaceou!",i);
        }
        else if (strcmp(sheldon,"rock")==0 && strcmp(raj,"scissors")==0){
            printf ("Caso #%d: Bazinga!",i);
        }
        else if (strcmp(sheldon,"scissors")==0 && strcmp(raj,"rock")==0){
            printf ("Caso #%d: Raj trapaceou!",i);
        }
        else{
            printf ("Caso #%d: De novo!",i);
        }
        printf ("\n");
    }
    return 0;
}
