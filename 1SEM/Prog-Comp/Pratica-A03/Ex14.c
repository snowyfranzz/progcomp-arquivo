#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");
    float a, b, c, d, e, f, x, y, divisor;

    printf("Insira o valor a: ");
    scanf("%f", &a);
    printf("Insira o valor b: ");
    scanf("%f", &b);
    printf("Insira o valor c: ");
    scanf("%f", &c);
    printf("Insira o valor d: ");
    scanf("%f", &d);
    printf("Insira o valor e: ");
    scanf("%f", &e);
    printf("Insira o valor f: ");
    scanf("%f", &f);

    divisor = a*e-b*d;

    system("cls");

    if(divisor == 0){
        printf("O sistema não possui solução.\n\n");
    }
    else{
        x = (c*e - b*f)/(divisor);
        y = (a*f-c*d)/(divisor);
        printf("Ao solucionar o sistema, temos que x = %.2f e y = %.2f.\n\n", x, y);
    }

    system("pause");
    return 0;
}