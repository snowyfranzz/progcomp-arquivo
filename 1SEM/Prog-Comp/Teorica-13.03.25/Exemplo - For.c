#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    // Leia 5 números inteiros e imprima o menor
    setlocale(LC_ALL, "portugueese");
    int menor = 32767, num, i;

    for(i=0; i<5; i++){
        printf("Insira um número (%i/5): ", i+1);
        scanf("%i", &num);

        system("cls");

        if(menor>num){
            menor = num;
        }
    }

    printf("O menor número inserido foi: %i\n\n", menor);

    system("pause");
    return 0;
    
}