#include <stdio.h>

float radice(float delta) {

    float temp, radice;

    radice = delta / 2;
    temp = 0;

    while(radice != temp) {
        temp = radice;
        radice = ( delta/temp + temp) / 2;
    }
    return radice;
}

int main() {

    float a;
    float b;
    float c;
    float delta;
    float x1;
    float x2;
    float x3;

    printf ("inserisci un numero: ");
    scanf ("%f", &a);
    printf ("inserisci un'altro numero: ");
    scanf ("%f", &b);
    printf ("inserisci ancora un numero: ");
    scanf ("%f", &c);

    delta = (b * b) - (4 * a * c);

    if (delta > 0) {
        x1 = (- b + radice(delta)) / (2 * a);
        x2 = (- b - radice(delta)) / (2 * a);
        printf ("le soluzioni di una equazione di secondo grado con i numeri dati come coefficenti sono %f e %f \n", x1, x2);
    } else if (delta == 0) {
        x3 = - b / (2 * a);
        printf ("le soluzioni di una equazione di secondo grado con i numeri dati come coefficenti sono uguali e valgono %f \n", x3);
    } else {
        printf ("l'equazione non ammette soluzioni reali \n");
    }
    return 0;
}