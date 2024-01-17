#include <stdio.h>

int main () {
    int n;
    
    printf("inserisci il tuo voto in matematica: \n");
    scanf("%d", &n);
    if(n>6){
        printf("sei un drago! \n");
    }
    else if(n<6){
        printf("potevi impegnarti di più");
    }
    else if(n=6){
        printf("ci sta ci sta");
    }
    return (0);
}