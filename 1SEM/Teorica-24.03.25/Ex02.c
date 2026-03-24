#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Ler um vetor de reais com no máximo 10 posições. Escrever a seguir o valor do maior elemento e a respectiva posição que ele ocupa no vetor.
int main(){
    setlocale(LC_ALL, "portuguese");
    int i, indiceMaior, n;
    float v[10];

    do{
        printf("Insira o tamanho do vetor desejado entre 1-10: ");
        scanf("%i", &n);

        if(n > 10 || n < 1){
            printf("Número invalido!\n");
        }
    
    }while(n > 10 || n < 1);

    system("cls");

    for(i=0; i<n; i++){
        printf("Insira um número qualquer (#%i): ", i+1);
        scanf("%f", &v[i]);

        if(i == 0){
            indiceMaior = i;
        }
        else{
            if(v[i] > v[indiceMaior]){
                indiceMaior = i;
            }
        }
    }

    system("cls");

    printf("O maior número inserido foi %.2f, no índice %i.", v[indiceMaior], indiceMaior);

    system("pause");
    return 0;
}