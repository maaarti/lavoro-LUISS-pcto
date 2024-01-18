#include <stdio.h>

char ciao (char m) {
    
    if ((m >= 65)&&(m <= 122)) {
        if ((m >= 91)&&(m <= 96)) {
            printf (" non è una lettera, sveglia! \n");
        } else {
            if ((m == 97)||(m == 101)||(m == 105)||(m == 111)||(m == 117)||(m == 65)||(m == 69)||(m == 73)||(m == 79)||(m == 85)) {
                printf ("la lettera data è una vocale \n");
            } else {
                printf ("la lettera data è una consonante \n");
            }
        }
    } else {
        printf ("non è una lettera, sveglia! \n");
    }
    return m;
}

int main () {
    char m;
    printf("inserisci una lettera: ");
    scanf("%c", &m);
    ciao(m);
    return 0;
}
