#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void stampa(int matrice[][4]);
void riempi(int matrice[][4]);
void scambio(int matrice[][4], int , int );

int main(void) {
    srand(time(NULL));
    int matrice[4][4];
    int riga1;
    int riga2;
    printf("Inserisci le righe che vuoi scambiare: ");
    scanf("%d %d", &riga1, &riga2);

    riempi(matrice);
    stampa(matrice);
    scambio(matrice, riga1, riga2);
    puts("");
    stampa(matrice);

    return 0;
}

void stampa(int b[][4]) {
    for (int i = 0; i < 4; i++) {
        for (int k = 0; k < 4; k++) {
            printf("%d ", b[i][k]);
        }
        puts("");
    }
}

void riempi(int b[][4]) {
    for (int i = 0; i < 4; i++) {
        for (int k = 0; k < 4; k++) {
            b[i][k] = rand() % 20;
        }
    }
}

void scambio(int b[][4], int uno, int due) {
    for (int k = 0; k < 4; k++) {
        int variabile = b[uno-1][k];
        b[uno-1][k] = b[due-1][k];
        b[due-1][k] = variabile;
    }
}
