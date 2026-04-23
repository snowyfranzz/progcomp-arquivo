#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// *Quase identico ao Ex01 da Teorica-17.03.25!

int main(){
    setlocale(LC_ALL, "portuguese");
    float num, maior, segMaior;
    int i;

    maior = -32767;
    segMaior = -32767;

    for(i=0; i<10; i++){
        printf("Insira um número: ");
        scanf("%f", &num);

        if(num>segMaior){
            if(num>maior){
                segMaior = maior;
                maior = num;
            }
            else{
                segMaior = num;
            }
        }
    }

    system("cls");

    printf("\n\nO maior número e o segundo maior número inseridos foram, respectivamente, %.2f e %.2f.\n\n", maior, segMaior);

    system("pause");
    return 0;
}
