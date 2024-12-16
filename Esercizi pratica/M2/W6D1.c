#include <stdio.h>

// Funzione per il menù principale
void mostramenu() {
    printf("Benvenuto al gioco Domande e Risposte\n");
    printf("A) Iniziare una nuova partita\n");
    printf("B) Uscire dal gioco\n");
    printf("Scegli un'opzione: ");
}

// Funzione per gestire una nuova partita
void nuovapartita() {
    char nomeutente[50];
    int punteggio = 0;
    char risposta;

    // Chiedi il nome dell'utente
    printf("\nInserisci il tuo nome: ");
    scanf("%49s", nomeutente);

    // Domande e risposte
    printf("\nCiao %s, iniziamo il quiz!\n", nomeutente);

    // Domanda 1
    printf("\nDomanda 1: Chi ha interpretato Jordan Belfort in The Wolf of Wall Street?\n");
    printf(" A) Tom Cruise\n B) Leonardo Di Caprio\n C) Tom Hanks\n");
    printf("Risposta: ");
    scanf(" %c", &risposta);
    if (risposta == 'B' || risposta == 'b') {
        punteggio++;
        printf("Risposta corretta!\n");
    } else {
        printf("Risposta sbagliata!\n");
    }

    // Domanda 2
    printf("\nDomanda 2: Quanto fa 5 + 5?\n");
    printf(" A) 10\n B) 25\n C) 3\n");
    printf("Risposta: ");
    scanf(" %c", &risposta);
    if (risposta == 'A' || risposta == 'a') {
        punteggio++;
        printf("Risposta corretta!\n");
    } else {
        printf("Risposta sbagliata!\n");
    }

    // Domanda 3
    printf("\nDomanda 3: Quando uscirà GTA VI?\n");
    printf(" A) Mistero\n B) 2030\n C) 2025\n");
    printf("Risposta: ");
    scanf(" %c", &risposta);
    if (risposta == 'C' || risposta == 'c') {
        punteggio++;
        printf("Risposta corretta!\n");
    } else {
        printf("Risposta sbagliata!\n");
    }

    // Mostra il punteggio totale
    printf("\n%s, Il tuo punteggio totale è: %d su 3\n", nomeutente, punteggio);
}

// Funzione principale
int main() {
    char scelta;

    while (1) {
        mostramenu();
        scanf(" %c", &scelta);

        if (scelta == 'A' || scelta == 'a') {
            nuovapartita();
        } else if (scelta == 'B' || scelta == 'b') {
            printf("\nGrazie per aver giocato con noi, alla prossima!\n");
            break;
        } else {
            printf("\nScelta non valida, riprova.\n");
        }
    }

    return 0;
}