#include <stdio.h>

int main() {
    
    char uno;
    char due;
    char tre;
    char quattro;
    char cinque;
    char sei;
    char sette;

    printf("inserisci il tuo colore preferito: \n");
    scanf("%c", &uno);
    scanf("%c", &due);
    scanf("%c", &tre);
    scanf("%c", &quattro);
    scanf("%c", &cinque);
    scanf("%c", &sei);
    scanf("%c", &sette);
    printf("il mio colore preferito è: %c%c%c%c%c%c%c \n", uno, due, tre, quattro, cinque, sei, sette);

    return(0);
}