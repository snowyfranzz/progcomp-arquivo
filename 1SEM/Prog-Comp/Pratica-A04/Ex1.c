#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int index;
    float x, y;

    printf("1.              Média entre dois números.\n");
    printf("2.         Diferença do maior pelo menor.\n");
    printf("3.  Produto entre dois números digitados.\n");
    printf("4.      Divisão do primeiro pelo segundo.\n\n");

    printf("Insira qual operação você deseja realizar: ");
    scanf("%i", &index);

    system("cls");

    switch(index){
        case 1:
            // Média entre dois números
            printf("Insira o primeiro número: ");
            scanf("%f", &x);
            printf("Insira o segundo número: ");
            scanf("%f", &y);

            system("cls");

            printf("A média entre %.2f e %.2f é: %.2f\n\n", x, y, (x+y)/2);
            break;

        case 2:
            // Diferença do maior pelo menor
            printf("Insira o primeiro número: ");
            scanf("%f", &x);
            printf("Insira o segundo número: ");
            scanf("%f", &y);

            system("cls");

            if (x>y){
                    printf("A diferença entre %.2f e %.2f é: %.2f\n\n", x, y, x-y);
            }
            else{
                if (y>x){
                    printf("A diferença entre %.2f e %.2f é: %.2f\n\n", y, x, y-x);
                }
                else{
                   printf("Os números inseridos são iguais!\n\n");
                }
            }
            break;

        case 3:
            // Produto entre dois números digitados
            printf("Insira o primeiro número: ");
            scanf("%f", &x);
            printf("Insira o segundo número: ");
            scanf("%f", &y);

            system("cls");

            printf("O produto de %.2f e %.2f é: %.2f\n\n", x, y, x*y);
            break;

        case 4:
            // Divisão do primeiro pelo segundo
            printf("Insira o primeiro número: ");
            scanf("%f", &x);
            printf("Insira o segundo número: ");
            scanf("%f", &y);

            system("cls");

            printf("A divisão entre %.2f e %.2f é: %.2f\n\n", x, y, x/y);
            break;

        default:
            printf("O valor inserido não corresponde a nenhuma função!\n\n");
    }


    system("pause");
    return 0;
}
