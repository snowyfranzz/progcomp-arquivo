#include <stdio.h>
#include <stdlib.h>

// O nome desse arquivo é Ex03b por que é o segundo item do exercício 03. Também olhe o 03a!!
// O foco desse exercício era transformar um trecho de código que apresenta um loop for em while e do-while:
/*
scanf("%i", &val);
k=0;
D=0
while(k<val){
    scanf("%d", &n1);
    if((n1%3)==0)
    {
        ND++;
        if(n1%2==0)
        {
            D++;
        }
    }
    k=k+3;
}
*/

int main(){
    int index, k, D, n1, ND, val;

    D=0;
    ND=0;

    printf("Menu: 1 - For | 2 - Do-while > ");
    scanf("%i", &index);

    switch(index){
        case 1:
            printf("Insira um valor inteiro: ");
            scanf("%i", &val);

            system("cls");

            for(k=0; k<val; k+=3){
                printf("Insira um valor inteiro: ");
                scanf("%i", &n1);

                if((n1%3)==0){
                    ND++;
                    if(n1%2==0){
                        D++;
                    }
                }
            }
            break;
        
        case 2:
        printf("Insira um valor inteiro: ");
        scanf("%i", &val);

        k=0;
        
        if(k<val){
                do{
                    printf("Insira um valor inteiro: ");
                    scanf("%i", &n1);

                    if((n1%3)==0){
                        ND++;
                        if(n1%2==0){
                            D++;
                        }
                    }

                    k = k+3;
                }while(k<val);
            }
            break;
        
        default:
            printf("Insira um valor de 1 ou 2!");
            break;
    }

    system("cls");
    
    printf("D = %i, ND = %i.\n\n", D, ND);

    system("pause");
    return 0;

}