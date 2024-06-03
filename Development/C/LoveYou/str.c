#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int controllo_vocali(char vocali[], char stringa[]);
int controllo_consonanti(char stringa[], int, int);
int controllo_punti(char stringa[]);

int main(void){
    char vocali[] = "aeiouAEIOU";
    char stringa[100];
    
    int num_voc = 0;
    int num_cons = 0;
    int num_pun = 0;
    
    printf("Inserisci una stringa: ");
    fgets(stringa, sizeof(stringa), stdin);
    
    // Rimuove il carattere newline se presente
    stringa[strcspn(stringa, "\n")] = 0;

    num_voc = controllo_vocali(vocali, stringa);
    num_pun = controllo_punti(stringa);
    num_cons = controllo_consonanti(stringa, num_pun, num_voc);

    printf("Le vocali all'interno della stringa sono %d", num_voc);
    printf("\nLe consonanti all'interno della stringa sono %d", num_cons);
    printf("\nI caratteri extra all'interno della stringa sono %d", num_pun);   

    return 0;
}

int controllo_vocali(char lettere[], char frase[]){
    int result = 0;
    for (int i = 0; i<strlen(frase); i++){
        for (int k = 0; k<strlen(lettere); k++){
            if (frase[i] == lettere[k]){
                result++;
            }
        }
    }
    return result;
}

int controllo_punti(char a[]){
    int result = 0;
    for (int i = 0; i < strlen(a); i++){
        if ((a[i] >= 33 && a[i] <= 47) || 
            (a[i] >= 58 && a[i] <= 64) || 
            (a[i] >= 91 && a[i] <= 96) || 
            (a[i] >= 123 && a[i] <= 126)){
            result++;
        }
    }
    return result;    
}

int controllo_consonanti(char str[], int a, int b ){
    int result = strlen(str) - (a+b);
    return result;
}
