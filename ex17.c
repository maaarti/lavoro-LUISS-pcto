#include <stdio.h>

int main () {
    int a = 4;
    int b = 3;
    int c = 3;

    if(a == b && b == c){
        printf("il triangolo è equilatero \n");
    } else if ((a == b && b != c)||(a == c && b != c)||(c == b && b != a)) {
        printf("il triangolo è isoscele \n");
    } else {
        printf("il triangolo è scaleno \n");
    }

    return (0);
}