
//scrivi un programma in C che legga due matruci e calcoli il loro prodotto

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_SIZE 5
#define MIN_SIZE 3

void casual_m(int , int , int[][COLS]);
void stampa(int , int , int[][COLS]);
void mult(int , int , int[][COLS], int[][COLS], int[][COLS]);

int main(void){
    srand(time(NULL));

    int ROWS = rand() % (MAX_SIZE- MIN_SIZE + 1) + MIN_SIZE;
    int COLS = rand() % (MAX_SIZE- MIN_SIZE + 1) + MIN_SIZE;

    int matrice[ROWS][COLS];
    int matrice_1[ROWS][COLS];
    int matrice_mul[ROWS][COLS];

    casual_m(ROWS, COLS, matrice);
    stampa(ROWS, COLS, matrice);
    puts("");

    casual_m(ROWS, COLS, matrice_1);
    stampa(ROWS, COLS, matrice_1);
    puts("");

    mult(ROWS, COLS, matrice, matrice_1, matrice_mul);
    stampa(ROWS, COLS, matrice_mul);
    return 0;
}

void casual_m(int r, int c, int b[][c]){
    for (int i=0; i<r; i++){
        for (int k=0; k<c; k++){
            b[i][k] = rand() % 10;
        }
    }
}

void stampa(int r, int c, int b[][c]){
    for (int i = 0; i<r; i++){
        for (int k = 0; k<c; k++){
            printf("%d ", b[i][k]);
            }
        puts("");
        }
    }


void mult( int r, int c, int a[][c], int b[][c], int d[][c]){
    for (int i=0; i<r; i++){
        for (int k=0; k<c; k++){
            d[i][k] = a[i][k] * b[i][k];
        }
    }
}