#include <stdio.h>

int main () {
    float a = 100;
    float b = 101;
    float c = 2; 
    
    int moltiplicazione = a * b;
    float divisione = moltiplicazione / c; 
    int somma = divisione;

    printf("moltiplicazione: %d \n", moltiplicazione);
    printf("divisione: %f \n", divisione);
    printf("somma: %d \n", somma);

    return 0;
}