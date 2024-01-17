#include <stdio.h>

int main () {
    
    int numero;

    float temp, radice;

    printf("dimmi un numero: \n");

    scanf("%d", &numero);
    radice = numero / 2;
    temp = 0;

    while(radice != temp) {
        temp = radice;
        radice = ( numero/temp + temp) / 2;
    }

    printf("La radice quadrata di %d è %f", numero, radice);
    return 0;
}