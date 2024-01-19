#include <stdio.h>
    int main () {
        char siNo [2];
        char citta [50];
        char eta [100];
        int n1;
        char a[] = "amici";
        char b[] = "famigliari";
        char c[] = "fidanzato/a";
        char d[] = "animale da compagnia";
        int i = n1;

        printf ("Benvenuto nella nostra app!\n");
        printf ("Vorremmo sapere in che città ti trovi per ricercare gli eventi presenti in essa: ");
        scanf (" %[^t\n]s", citta);
        printf ("Inserisci la tua età in lettere così da permetterci di trovare degli eventi più adatti a te: ");
        scanf (" %[^t\n]s", eta);
        printf ("Vorremmo sapere con chi andrai all'evento, scegli l'opzione corretta: \n");
        ret:
        printf ("premendo 1 se esci con %s\n", a);
        printf ("premendo 2 se esci con %s\n", b);
        printf ("premendo 3 se esci con %s\n", c);
        printf ("premendo 4 se esci con %s\n", d);
        scanf (" %d", &n1);
        
        if (n1 == 1 || n1 == 2 || n1 == 3 || n1 == 4) {
            if (n1 == 1) {
                printf ("Hai scelto eventi inerenti alla musica! Ecco cosa abbiamo trovato:\n");
            
        }
        else if (n1 == 2) {
            printf ("Hai scelto eventi inerenti all'arte e alla cultura! Ecco cosa abbiamo trovato:\n");

        }
        else if (n1 == 3) {
            printf ("Hai scelto eventi inerenti allo sport e alla salute! Ecco cosa abbiamo trovato:\n");
        }
        else if (n1 == 4) {
            printf ("Hai scelto eventi della categoria bambini! Ecco cosa abbiamo trovato:\n");
        } else {
            printf ("Non hai digitato uno dei numeri che corrispondono all'evento, riprova!\n");
            n1 = '\0';
            goto ret;
        }
        }
        return 0;
    } 