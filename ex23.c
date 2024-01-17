#include <stdio.h>

void ciao() {
}
int main() {
    int i;

    i = 100;
    while (0 <= i && i <= 100) {
        printf("%d \n", i);
        i = i - 2;
    }

    return 0;
}