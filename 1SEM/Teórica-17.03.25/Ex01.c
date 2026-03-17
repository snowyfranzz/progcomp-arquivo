#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");
    float num, maior, segMaior;
    int n = 0;

    maior = -32767;
    segMaior = -32767;

    printf("Insira um número qualquer ou escreva 0 para sair. > ");
        scanf("%f", &num);

    while(num!=0){
        ++n;

        if(num>segMaior){
            if(num>maior){
                segMaior = maior;
                maior = num;
            }
            else{
                segMaior = num;
            }
        }

        printf("Insira um número qualquer ou escreva 0 para sair. > ");
        scanf("%f", &num);
    }
    
    if (n<2){
        if(n!=0){
            printf("\n\nO maior número inserido foi %.2f e não houve segundo maior.\n\n", maior);
        }
        else{
            printf("\n\nO usuário não inseriu nenhum número.\n\n");
        }

    }
    else{
        printf("\n\nO maior número e o segundo maior número entre os %i inseridos foram, respectivamente, %.2f e %.2f.\n\n", n, maior, segMaior);
    }
    
    system("pause");
    return 0;
}