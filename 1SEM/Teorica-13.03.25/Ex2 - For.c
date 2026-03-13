#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    // Programa que lê um número N e calcula a soma de todos os números pares entre 1 e N
    setlocale(LC_ALL, "portugueese");
    int N, i, soma;
    soma = 0;

    printf("Insira um número inteiro: ");
    scanf("%i", &N);

    system("cls");

    for(i=1; i<N; i++){

        if(i%2 == 0){
            soma += i;
        }
    }

    printf("A soma dos números pares entre 1 e %i é: %i.\n\n", i, soma);

    system("pause");
    return 0;
}