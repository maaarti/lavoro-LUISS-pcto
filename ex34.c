#include <stdio.h>
    int main () {
        char siNo [2];
        char citta [50];
        char eta [100];
        int ac;
        char a[] = "amici";
        char b[] = "famigliari";
        char c[] = "fidanzato/a";

        printf ("Benvenuto nella nostra app!\n");
        printf ("Vorremmo sapere in che città ti trovi per ricercare gli eventi presenti in essa: ");
        scanf (" %[^t\n]s", citta);
        printf ("Inserisci la tua età in lettere così da permetterci di trovare degli eventi più adatti a te: ");
        scanf (" %[^t\n]s", eta);
        ret:
            printf ("Vorremmo sapere con chi andrai all'evento, scegli l'opzione corretta: \n");
            printf ("premendo 1 se esci con %s\n", a);
            printf ("premendo 2 se esci con %s\n", b);
            printf ("premendo 3 se esci con %s\n", c);
            scanf ("%d", &ac);
            printf ("Hai digitato %d \n", ac);
            if ((ac == 1)||(ac == 2)||(ac == 3)) {
                if (ac == 1) {
                    printf ("Sei con degli amici? Ecco cosa abbiamo trovato:\n");
                    printf ("1. Corri all'Acquario civico di Milano: all'estremità di Parco Sempione, l'Acquario civico di Milano è il luogo adatto per ammirare razze, stelle marine, storioni e tantissime altre specie nelle vasche dedicate agli habitat marini e di acqua dolce \n");
                    printf ("Posizione: Viale Gadio 2, 20121, Milano \n Orario: Da martedì a domenica, dalle 09:00 alle 17:30 (chiuso il lunedì) \n Recapito Telefonico: +39 02 8846 5750 \n");
                    printf ("2. Museo di Storia Naturale di Milano: ospitato in un edificio ottocentesco all'interno dei giardini pubblici Indro Montanelli, il Museo Civico di Storia Naturale di Milano è considerato uno dei più importanti musei naturalistici, luogo ideale per d'Europa, luogo ideale per apprendere suli nostri ecosistemi divertendosi. Il biglietto costa 5 € per gli adulti, mentre l'ingresso è libero per i bambini.\n");
                }
                else if (ac == 2) {
                    printf ("Sei con il tuo fidanzato o con la tua fidanzata? Ecco cosa abbiamo trovato: \n");
                    printf ("1. Vai alla splendida mostra di Claude Monet nel giardino di Villa Reale: oltre che assistere alla mostra, nell'imponente villa neoclassica ex residenza del conte Belgiojoso, potrai passeggiare con il tuo compagno o con la tua compagna in un elegante e curato parco all'inglese, che ha l'aspetto di un boschetto appartato, intimo, elegante e con sentieri alberati intervallati da ponticelli di legno, un laghetto popolato di anatre e un piccolo tempio.\n");
                    printf ("Posizione: Via Palestro 16, 20121 Milano \n Orario: dalle 09:00 alle 16:00 \n Recapito telefonico: +39 02 8844 5943 \n");
                    printf ("2. Fai aperitivo al tramonto in un battello sui navigli: oggi verrà inaugurato un esclusivo battello con sala aperitivi sul ponte, solo per oggi gratuito, non perderti questa romantica esperienza con la tua dolce metà! (Non necessita di prenotazione) \n");
                    printf ("Posizione Alzaia Naviglio Grande, 2044 Milano \n Orario di inizio: 18:30 \n");
                }
                else if (ac == 3) {
                    printf ("Sei con un parente? Ecco cosa abbiamo trovato:\n");
                    printf ("1. Vai all'Acquatica Park: questo parco acquatico, raggiungibile in mezz'ora di auto dal centro di Milano, offre una buona scelta di piscine, scivoli e attrazioni ed è perfetto per adulti e bambini, che hanno un parco giochi a loro dedicato. L'ingresso costa circa 19 € per gli adulti, ma è gratuito per i bambini di altezza inferiore a 1 metro. \n");
                    printf ("Posizione: Via Gaetano Airaghi 61, 20153 Milano \n Orario: Luglio e agosto tutti i giorni dalle 10:00 alle 19:00 \n Recapito telefonico: +39 02 4820 0134 \n");
                    printf ("2. Visita il Museo Nazionale della Scienza e della Tecnologia Leonardo da Vinci: è un'esperienza istruttiva, interattiva e divertente per tutta la famiglia e da oggi nel museo è presente una collezione di modelli tridimensionali basati sui disegni di Leonardo. Il costo del biglietto intero è di circa € 10.\n");
                    printf ("Posizione: Via San Vittore 21, Milano \n Orario: Da martedì a venerdì dalle 09:30 alle 17:00, sabato e domenica dalle 09:30 alle 18:30 \n Recapito Telefonico: +39 02 485551 \n");
                } 
            } else {
                printf ("Non hai digitato uno dei numeri che corrispondono alla persona con cui esci, riprova!\n"); 
                ac = '\0';
                goto ret;
            }

        return (0);
    } 