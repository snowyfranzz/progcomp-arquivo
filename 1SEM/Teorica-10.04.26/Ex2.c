#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define LINHAS 5
#define COLUNAS 3

int main(){
    int mat[LINHAS][COLUNAS], matTrans[COLUNAS][LINHAS], i, j;
    setlocale(LC_ALL, "portuguese");

    // input da matriz 5x3
    for(i = 0; i<LINHAS; i++){
        printf("Linha #%i:\n\n", i+1);

        for(j = 0; j<COLUNAS; j++){
            printf("Insira um número (%i/%i):", j+1, COLUNAS);
            scanf("%i", &mat[i][j]);
        }
        system("cls");
    }

    // calculo da transposta 3x5 -> colunas de mat viram linhas e linhas viram colunas.
    for(j = 0; j<COLUNAS; j++){
        for(i = 0; i<LINHAS; i++){
            matTrans[j][i] = mat[i][j];
        }
    }

    system("cls");
    
    // output matriz 5x3
    printf("A matriz 5x3 é:\n");
    for(i = 0; i<LINHAS; i++){
        for(j = 0; j<COLUNAS; j++){
            printf("%03i ", mat[i][j]);
        }
        printf("\n");
    }

    // output transposta 3x5
    printf("\n\nE a sua transposta (3x5) é:\n");
    for(i = 0; i<COLUNAS; i++){
        for(j = 0; j<LINHAS; j++){
            printf("%03i ", matTrans[i][j]);
        }
        printf("\n");
    }

    system("pause");
    return 0;
}