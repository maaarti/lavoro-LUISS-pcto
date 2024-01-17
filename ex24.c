#include <stdio.h>

void ciao() {
}
int main() {
    float n;
    float i = 0;
    float s = 0;
    float m;

    while (n >= 0) {
        printf ("inserisci un numero: ");
        scanf ("%f", &n);
        if (n >= 0) {
            s = s + n;
            i = i + 1;
            m = s / i;
            printf("la media dei numeri inseriti è %f \n", m);
        } else {
            printf("numero negativo, error \n");
        }
        
    } 
    
    return 0;
}
