#include <stdio.h>
float ciao(float *n1, float *n2) {
    float n3;
    n3 = *n1;
    *n1 = *n2;
    *n2 = n3;
    return (*n1, *n2);
}


int main() {
    float n1;
    float n2;
    printf ("inserisci un valore: ");
    scanf ("%f", &n1);
    printf ("inserisci un'altro valore: ");
    scanf ("%f", &n2);
    ciao(&n1, &n2);
    printf ("i tuoi valori inveriti sono: %f, %f \n", ciao(&n1, &n2));
    return 0;
}
