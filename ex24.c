#include <stdio.h>

void ciao() {
}
int main() {
    float n;
    float i = 0;
    float s;

    while (i > 0) {
        printf ("inserisci un numero: ");
        scanf ("%d", &n);
        n + i / i++;
        printf("%d \n", i);
    } 
    if (i < 0) {
        printf("numero negativo, error \n")
    }

    return 0;
}