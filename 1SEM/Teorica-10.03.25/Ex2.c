#include <stdio.h>
#include <stdlib.h>

int main(){
    // Leia 3 numeros diferentes e imprima o maior
    int x, y, z;

    printf("Insira o primeiro numero: ");
    scanf("%i", &x);
    printf("Insira o segundo numero: ");
    scanf("%i", &y);
    printf("Insira o terceiro numero: ");
    scanf("%i", &z);

    system("cls");

    if(x > y && x > z){
        // x
        printf("Entre os numeros inseridos, %i eh o maior.\n\n", x);
    }
    else{
        if (y > x && y > z){
            // y
            printf("Entre os numeros inseridos, %i eh o maior.\n\n", y);
        }
        else{
            // z
            printf("Entre os numeros inseridos, %i eh o maior.\n\n", z);
        }
    }

    system("pause");
    return(0);

}