#include <stdio.h>

int main () {
    float c;
    float d;

    printf("inserisci a quanti anni si può prendere la patente nello stato in cui vivi: \n");
    scanf("%f", &c);
    printf("quanti anni hai? \n");
    scanf("%f", &d);
    if(d>=c){
        printf("puoi prendere la patente!!! \n");
    }
    else if(d<=c){
        printf("non puoi prendere la patente prova tra un po' di tempo! \n");
    }
    return (0);
}