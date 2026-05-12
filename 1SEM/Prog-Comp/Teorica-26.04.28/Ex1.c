#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void ler(float *num){
    printf("Insira um número real: ");
    scanf("%f", num);
}

float maiorMenor(float num1, float num2, float num3, float *menor){
    float maior;

    if(num1 >= num2){
        maior = num1;
        *menor = num2;
    } else {
        maior = num2;
        *menor = num1;
    }

    if(num3 >= maior){
        maior = num3;
    } else {
        if (num3 < *menor){
            *menor = num3;
        } 
    }

    return maior;
}

int main(){
    float num1, num2, num3;
    float maior, menor;
    setlocale(LC_ALL, "portuguese");

    ler(&num1);
    ler(&num2);
    ler(&num3);

    maior = maiorMenor(num1, num2, num3, &menor);

    printf("Maior: %.2f\n", maior);
    printf("Menor: %.2f\n", menor);
    
}