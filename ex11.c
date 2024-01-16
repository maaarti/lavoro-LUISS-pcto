#include <stdio.h>

int main () {
    int f;
    int g;
    printf("inserisci un numero: \n");
    scanf("%d", &f);
    printf("inserisci un'altro numero: \n");
    scanf("%d", &g);
    if(f % g == 0){
        printf("il primo numero è multiplo del secondo!! \n");
    }
    else if(f % g != 0){
        printf("il primo numero non è multiplo del secondo:o \n");
    }
return (0);
}