#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");
    int N, x, y, z, i, S;

    x = 1;
    y = 1;

    printf("Insira um número inteiro: ");
    scanf("%i", &N);

    for(i=0; i<N; i++){

        z = x+y;

        S += z;

        x = y;
        y = z;
    }

    system("cls");

    printf("S = %i\n\n", S);

    system("pause");
    return 0;
}
