#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define LINHAS 10
#define COLUNAS 10

int main(){
    int mat[LINHAS][COLUNAS], i, j, somaLinha4 = 0, menorColuna5, maiorDiag;
    setlocale(LC_ALL, "portuguese");

    // input da matriz
    for(i = 0; i<LINHAS; i++){
        printf("Linha #%i:\n\n", i+1);

        for(j = 0; j<COLUNAS; j++){
            printf("Insira um número (%i/%i):", j+1, COLUNAS);
            scanf("%i", &mat[i][j]);
        }
        system("cls");
    }

    system("cls");

    // soma da linha 4
    for(i = 3, j = 0; j<COLUNAS; j++){
        somaLinha4 += mat[i][j];
    }

    // menor da coluna 5
    menorColuna5 = mat[0][4];
    for(i = 0, j = 4; i<LINHAS; i++){
        if(mat[i][j] < menorColuna5){
            menorColuna5 = mat[i][j];
        }
    }

    // maior da diagonal
    maiorDiag = mat[0][0];
    for(i = 0, j = 0; i<LINHAS; i++, i++){
        if(mat[i][j] > maiorDiag){
            maiorDiag = mat[i][j];
        }
    }

    printf("Soma da linha 4: %i.\n", somaLinha4);
    printf("Menor da coluna 5: %i.\n", menorColuna5);
    printf("Maior da diagonal: %i.\n\n", maiorDiag);
    
    system("pause");
    return 0;
}