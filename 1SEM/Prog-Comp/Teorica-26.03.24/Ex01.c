#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Leia um vetor com no máximo 100 posições. O tamanho do vetor deve ser fornecido pelo usuário. Imprima a soma dos elementos fornecidos pelo usuário desse vetor.
int main(){
    setlocale(LC_ALL, "portugueese");
    int x, i, soma;
    int v[100];

    soma = 0;

    do{
        printf("Insira o tamanho do vetor desejado entre 1-100: ");
        scanf("%i", &x);

        if(x > 100 || x < 1){
            printf("Número invalido!\n");
        }
    
    }while(x > 100 || x < 1);

    system("cls");

    for(i=0; i<x; i++){
        printf("Insira o valor inteiro para o índice %i do vetor: ", i);
        scanf("%i", &v[i]);

        soma += v[i];
    }

    system("cls");

    printf("A soma de todos os valores do vetor v equivale a %i.", soma);

    system("pause");
    return 0;
}