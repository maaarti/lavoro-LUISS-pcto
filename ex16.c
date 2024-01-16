#include <stdio.h>

int main () {
    int c;
    int d;
    int e;
    printf("inserisci un numero: \n");
    scanf("%d", &c);
    printf("inserisci un'altro numero: \n");
    scanf("%d", &d);
    printf("inserisci ancora un numero: \n");
    scanf("%d", &e);

    if ((c + d) > e) {
        if ((d + e) > c) {
            if ((c + e) > d) {
                 printf("i numeri scelti possono essere le lunghezze dei lati di un triangolo \n");
                if (c == d) {
                    if (d == e) {
                        printf("i numeri scelti formano un triangolo equilatero \n");
                    } 
                } else {
                    if (d == e){
                        printf("i numeri scelti formano un triangolo isoscele \n");
                    } else if (c == e) {
                        printf("i numeri scelti formano un triangolo isoscele \n");
                    } else {
                        printf("i numeri scelti formano un triangolo scaleno \n");
                    }
                }
            } else {
                printf("i numeri scelti non possono essere le lunghezze dei lati di un triangolo \n");
            } 
        } else {
            printf("i numeri scelti non possono essere le lunghezze dei lati di un triangolo \n");
        } 
    } else {
        printf("i numeri scelti non possono essere le lunghezze dei lati di un triangolo \n");
    }

    return (0);
}