#include <stdio.h>
#include <stdlib.h>

// O nome desse arquivo é Ex03a por que os exercícios 01 e 02 foram testes de mesa realizados no caderno e é o item a do exercício 3
// O foco desse exercício era transformar um trecho de código que apresenta um loop for em while e do-while:
/*
scanf("%i", &n);

for(i=1; i<=n; i++){
    acum = acum*i
    }

    printf("%i", acum);
*/
int main(){
    int index, n, i, acum;
    
    acum = 1; // valor qualquer (desconhecido)

    printf("Menu: 1 - While | 2 - Do-while > ");
    scanf("%i", &index);

    switch(index){
        case 1:
            printf("Insira um valor inteiro: ");
            scanf("%i", &n);

            i = 1; 

            while(i<=n){
                acum = acum*i;

                i++;
            }

            printf("%i\n\n", acum);
            break;
            
        case 2:
            printf("Insira um valor inteiro: ");
            scanf("%i", &n);

            i = 1; 

            do{
                acum = acum*i;
                i++;
            }while(i<=n);

            printf("acum = %i.\n\n", acum);
            break;
        
        default:
            printf("Insira um valor de 1 ou 2!");
            break;
    }
    
    system("pause");
    return(0);

}