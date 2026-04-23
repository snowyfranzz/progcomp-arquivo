#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

#define TAM 11

void limpaBuffer(){
    int c;
    while((c = getchar()) != '\n' && c != EOF );
}

int main(){
    char A[TAM], B[TAM], C[TAM], strStore[TAM];
    setlocale(LC_ALL, "portuguese");
    
    printf("Insira uma palavra de até 10 letras: ");
    fgets(A, sizeof(A), stdin);
    A[strcspn(A, "\n")] = '\0';
    limpaBuffer();

    printf("Insira mais uma palavra de até 10 letras: ");
    fgets(B, sizeof(B), stdin);
    B[strcspn(B, "\n")] = '\0';
    limpaBuffer();

    printf("Insira a última palavra de até 10 letras: ");
    fgets(C, sizeof(C), stdin);
    C[strcspn(C, "\n")] = '\0';
    limpaBuffer();

    system("cls");

    if(strcmp(A, B) > 0){
        // A vem depois de B
        strcpy(strStore, A);
        strcpy(A, B);
        strcpy(B, strStore);
    }
    if(strcmp(A, C) > 0){
        // A vem depois de C
        strcpy(strStore, A);
        strcpy(A, C);
        strcpy(C, strStore);
    }
    if(strcmp(B, C) > 0){
        // B vem depois de C
        strcpy(strStore, B);
        strcpy(B, C);
        strcpy(C, strStore);
    }

    printf("A ordem alfabética das palavras é: %s, %s, %s.\n", A, B, C);

    system("pause");
    return 0;
}

