#include <stdio.h>
#include <stdlib.h>

int main(){
    // Calcule a media, e se a media foi >= 7 retorne aprovado, = 10 aprovado com louvor, <7 reprovado
    float nota1, nota2, media;
    
    printf("Insira a primeira nota: ");
    scanf("%f", &nota1);
    printf("Insira a segunda nota: ");
    scanf("%f", &nota2);

    media = (nota1 + nota2)/2;

    system("cls");

    if (media>=7){

        if (media==10){
            printf("Aprovado com louvor.\n\n");
        }
        else{
            printf("Aprovado.\n\n");
        }

    }
    else {
        printf("Reprovado.\n\n");
    }

    system("pause");
    return(0);
}