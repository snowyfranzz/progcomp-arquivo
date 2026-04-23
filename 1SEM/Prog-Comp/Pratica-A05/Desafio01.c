#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");
    int nHab, nFilhos, nFilhosTotal, nHabSalBaixo, i;
    float sal, salTotal, salMaior;

    sal = 0;

    printf("Insira o número de habitantes da cidade: ");
    scanf("%i", &nHab);

    system("cls");

    for(i=0; i<nHab; i++){
        printf("Pesquisa - Usuário #%i\n\n", i+1);

        printf("Insira seu salário: ");
        scanf("%f", &sal);

        salTotal += sal;

        if(sal<=100){
            nHabSalBaixo++;
        }

        if (sal>salMaior){
            salMaior = sal;
        }

        printf("Insira a quantidade de filhos que você tem: ");
        scanf("%i", &nFilhos);

        nFilhosTotal += nFilhos;

        printf("\nObrigado por responder a pesquisa!\n");
        system("pause");
        system("cls");
    }

    printf("Média de salário da população: R$%.2f.\n", salTotal/(float)nHab);
    printf("Média do número de filhos da população: %.2f.\n", (float)nFilhosTotal/(float)nHab);
    printf("Maior salário: R$%.2f.\n", salMaior);
    printf("Pecentual de pessoas com salário de até R$100,00: %.2f%%.\n\n\n", ((float)nHabSalBaixo/(float)nHab)*100);


    system("pause");
    return 0;
}
