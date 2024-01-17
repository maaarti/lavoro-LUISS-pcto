#include <stdio.h>

int main () {
    int x;

    int sottrazione1;
    int sottrazione2;
    
    printf("qual'è il tuo anno di nascita? \n");
    scanf("%d", &x);
    sottrazione1 = 1969 - x;
    sottrazione2 = x - 1969;

    if(x == 1969) {
        printf("sei nato nell'anno in cui l'uomo è andato sulla Luna!! \n");
    } else { 
        if(x > 1969) {
            printf("sei nato %d anni dopo l'anno in cui l'uomo è stato sulla Luna \n", sottrazione2);
        } 
        if(x < 1969) {
            printf("sei nato %d anni prima dell'anno in cui l'uomo è stato sulla Luna \n", sottrazione1);
        }
    }

    return (0);
}