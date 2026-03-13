#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    // programa que imprime todos os números múltiplos de 7 entre 100 e 500
    setlocale(LC_ALL, "portugueese");
    int i;

    printf("Os números ");

    for(i=100; i<501; i++){

        if (i%7==0){
            printf("%i, ", i);
        }

    }

    printf("são múltiplos de 7.\n\n");
    system("pause");
    return(0);
}