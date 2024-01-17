#include <stdio.h>

void ciao() {
    printf("il tuo numero è primo! \n");
}
int main() {
    int numero;
    int i;
    
    printf("inserisci un numero: ");
    scanf("%d", &numero);
    i = numero - 1;
    while (numero % i != 0 && i > 1) {
        i--; 
    } if (i == 1) {
        printf("il tuo numero è primo \n");
    } else {
        printf("il tuo numero non è primo \n");
    }
    return 0;
}