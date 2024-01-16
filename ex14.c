#include <stdio.h>

int main () {
    int c;

    printf("inserisci un anno: \n");
    scanf("%d", &c);
    if (c % 400 == 0) {
        printf("l'anno è bisestile \n");
    } else {
        if (c % 4 == 0) {
            if (c % 100 != 0) {
                printf("l'anno è bisestile \n");
            } else {
                printf("l'anno non è bisestile \n");
            }
        } else {
            printf("l'anno non è bisestile \n");
        }
    }

    return (0);
}