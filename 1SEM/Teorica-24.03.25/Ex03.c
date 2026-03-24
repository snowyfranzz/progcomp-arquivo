#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Imprima o vetor C, sendo cada indice dele uma soma do mesmo indice dos vetores A e B, de tamanho n que será no máximo 20.
int main(){
    int A[20], B[20], C[20];
    int n, i;

    do{
        printf("Insira o tamanho desejado dos vetores entre 1-20: ");
        scanf("%i", &n);

        if(n > 10 || n < 1){
            printf("Número invalido!\n");
        }
    
    }while(n > 20 || n < 1);

    system("cls");

    for(i=0; i<n; i++){
        printf("Insira os valores para o vetor A (#%i): ", i+1);
        scanf("%i", &A[i]);
    }

    system("cls");

    for(i=0; i<n; i++){
        printf("Insira os valores para o vetor B (#%i): ", i+1);
        scanf("%i", &B[i]);
    }

    system("cls");

    printf("O vetor C será igual a: ");

    for(i=0; i<n; i++){
        C[i] = A[i] + B[i];

        printf("%i ", C[i]);
    }

    printf("\n\n");
    system("pause");
    return 0;
}