#include <stdio.h>

int main () {
    int c;
    int d;
    int e;

    printf("inserisci un numero: \n");
    scanf("%d", &c);
    printf("inserisci un'altro numero: \n");
    scanf("%d", &d);
    printf("inserisci un'ultimo numero: \n");
    scanf("%d", &e);
    if (c - d == d - e); {
        printf("i numeri sono in progressione aritmetica!! \n");
    }if (c - d != d - e) {
        printf("i numeri non sono in progressione aritmetica \n");
    }
    return (0);
}