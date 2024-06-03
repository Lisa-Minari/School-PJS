#include <stdio.h>
#include <stdlib.h>

void stampa(int[][4]);
void riempi(int[][4]);
void uno(int[][4]);

int main(void){
   int matrice[4][4];
   riempi(matrice);
   uno(matrice);
   stampa(matrice);
     return 0;
}

void stampa (int b[][4]){
    for (int i = 0; i<4; i++){
        for (int k = 0; k<4; k++){
            printf("%d ", b[i][k]);
            }
        puts("");
        }
    }
   
void riempi(int b[][4]){
    for (int i=0; i<4; i++){
        for (int k=0; k<4; k++){
            b[i][k-1] =0;
        }
    }
}

void uno(int b[][4]) {
    for (int i = 0; i < 4; i++) {
        b[i][i] = 1; // Imposta gli elementi sulla diagonale principale a 1
        b[i][3 - i] = 1; // Imposta gli elementi sulla diagonale inversa a 1
    }
}
