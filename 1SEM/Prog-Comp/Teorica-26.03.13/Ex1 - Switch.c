#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    // Programa que le um numero de 1- 7 e retorna o dia da semana
    setlocale(LC_ALL, "portuguese");
    int dia;

    printf("Insira o número do dia da semana: ");
    scanf("%i", &dia);

    system("cls");

    switch(dia){
        case 1:
            printf("Hoje é domingo!\n\n");
            break;

        case 2:
            printf("Hoje é segunda-feira!\n\n");
            break;

        case 3:
            printf("Hoje é terça-feira!\n\n");
            break;

        case 4:
            printf("Hoje é quarta-feira!\n\n");
            break;
        
        case 5:
            printf("Hoje é quinta-feira!\n\n");
            break;

        case 6:
            printf("Hoje é sexta-feira!\n\n");
            break;

        case 7:
            printf("Hoje é sabado!\n\n");
            break;
        
        default:
            printf("Esse número não corresponde a um dia da semana. :(\n\n");
    }

    system("pause");
    return(0);
}