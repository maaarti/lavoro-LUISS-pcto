#include <stdio.h>
int main () {
    char stringa [100];
    int i = 0;
    printf("inserisci una stringa: ");
    scanf("%[^\t\n]s", stringa);
    while(stringa[i] != '\0') {
            if((stringa[i] >= 97)&&(stringa[i] <= 122)) {
                stringa[i] = stringa[i] - 32;
            } 
            i++;
        }
    printf("questa è la tua stringa in maiuscolo %s \n", stringa);

    return 0;
    }
    