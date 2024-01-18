#include <stdio.h>
int main () {
    char ciao [] = "ola";
    printf("%s \n", ciao);
    ciao[0] = 'O';
    ciao[1] = 'L';
    ciao[2] = 'A';
    printf("%s \n", ciao);
    return 0;
}