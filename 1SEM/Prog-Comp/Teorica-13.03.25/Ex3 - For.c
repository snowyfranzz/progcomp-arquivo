#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    // Programa que le um número N e calcula a soma dos N primeiros números pares
    setlocale(LC_ALL, "portuguese");
    int i, N, soma, indice;
    indice = 1;
    soma = 0;

    printf("Insira um número inteiro: ");
    scanf("%i", &N);

    system("cls");

    for(i=1; indice<=N; i++){
  
        if (i%2 == 0){;
            soma+=i;
            indice++;
        }
    }

    printf("A soma dos %i primeiros números pares é: %i.\n\n", N, soma);

    system("pause");
    return 0;
}