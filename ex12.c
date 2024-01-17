#include <stdio.h>

int main () {
    float c;

    printf("inserisci una temperatura in Celsius: \n");
    scanf("%f", &c);
    if ( c <= -273.15 ){
        printf("errore!! \n");
    } else {
        printf("temperatura in Fahrenheit: %f \n", (1.8 * c) + 32);
        printf("temperatura in Kelvin: %f \n", c + 273.15);
    }
    
    return (0);
}