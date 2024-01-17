#include <stdio.h>

void ciao() {
}
int main() {
    int n;
    int i = 0;

    printf ("inserisci un numero: ");
    scanf ("%d", &n);
    while (i > 0) {
        printf ("inserisci un numero: ");
        scanf ("%d", &n);
        n + i / i++;
        printf("%d \n", i);
    } 

    return 0;
}