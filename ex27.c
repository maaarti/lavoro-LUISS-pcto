#include <stdio.h>

float somma (float n1, float n2) {
    int somma = n1 + n2;
    return somma;
}
float sottrazione (float n1, float n2) {
    int sottrazione = n1 - n2;
    return sottrazione;
}
float moltiplicazione (float n1, float n2) {
    int moltiplicazione = n1 * n2;
    return moltiplicazione;
}
float divisione (float n1, float n2) {
    float divisione = n1 / n2;
    return divisione;
}

int main () {
    float n1;
    float n2;
    char o;
    printf("inserisci un numero: ");
    scanf("%f", &n1);
    printf("inserisci un'altro numero: ");
    scanf("%f", &n2);
    printf("dichiara l'operazione che devo svolgere: ");
    scanf(" %c", &o);
    
    if (o == '+') {
        somma(n1,n2);
        printf ("la somma dei numeri inseriti è %f \n", somma(n1,n2));
    }
    if (o == '-') {
        sottrazione(n1,n2);
        printf ("la sottrazione dei numeri inseriti è %f \n", sottrazione(n1,n2));
    }
    if (o == '*') {
        moltiplicazione(n1,n2);
        printf ("la moltiplicazione dei numeri inseriti è %f \n", moltiplicazione(n1,n2));
    }
    if (o == '/') {
        divisione(n1,n2);
        printf ("la divisione dei numeri inseriti è %f \n", divisione(n1,n2));
    }

    return 0;
}
