#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void ler(int *num){
    printf("Insira um número inteiro: ");
    scanf("%i", num);
}

int soma_digit(int a){
    int soma = 0;

    while(a > 0){
        soma += a%10;
        a /= 10;
    }

    return soma;
}

void Maior_Digit(int N, int *M){
    int aux = 0, auxStore = 0;
    *M = 0;

    while(N > 0){
        auxStore = aux;
        aux = N%10;
        if(aux > auxStore){
            *M = aux;
        }
        N /= 10;
    }
}

int main(){
    int num, soma, maior;
    setlocale(LC_ALL, "portuguese");

    ler(&num);
    soma = soma_digit(num);
    Maior_Digit(num, &maior);

    printf("Soma: %i\n", soma);
    printf("Maior Digito: %i\n", maior);
}