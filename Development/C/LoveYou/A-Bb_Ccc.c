#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){

    int stringa[100];
    printf("Inserisci una stringa:");
    fgets(stringa, sizeof(stringa), stdin);
    int result[100];

    for (int i=0; i<strlen(stringa); i++){
        for (int k=0; k<strlen(result); k++){
            result[k] = striga[i]
        }
    }
    return 0;
}

