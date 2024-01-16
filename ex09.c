#include <stdio.h>

int main () {
    float m;
    float n;
    printf("inserisci un numero: \n");
    scanf("%f", &m);
    printf("inserisci un altro numero: \n");
    scanf("%f", &n);
    if(m>n){
        printf("il primo numero è maggiore del secondo:) \n");
    }
    if(m<n){
        printf("il secondo numero è maggiore del primo<3 \n");
    }
    if(m==n){
        printf("i numeri sono uguali:| \n");
    }
return (0);
}