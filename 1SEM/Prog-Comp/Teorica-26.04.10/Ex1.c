#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define LINHAS 5
#define COLUNAS 5

int main(){
    int mat[LINHAS][COLUNAS], i, j, linhaMaior, colunaMaior;
    setlocale(LC_ALL, "portuguese");

    for(i = 0; i<LINHAS; i++){
        printf("Linha #%i:\n\n", i+1);

        for(j = 0; j<COLUNAS; j++){
            printf("Insira um número (%i/%i):", j+1, COLUNAS);
            scanf("%i", &mat[i][j]);

            if(i == 0 && j == 0){
                linhaMaior = i;
                colunaMaior = j;
            } else {
                if (mat[i][j] > mat[linhaMaior][colunaMaior]){
                    linhaMaior = i;
                    colunaMaior = j;
                }
            }
        }
        system("cls");
    }

    printf("O maior número inserido foi %i, na posição [%i, %i].", mat[linhaMaior][colunaMaior], linhaMaior, colunaMaior);

    system("pause");
    return 0;
}