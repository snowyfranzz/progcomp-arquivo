# include <stdio.h>
# include <stdlib.h>
# include <locale.h>
# include <string.h>

# define TAMANHO_DESC 100
# define MAX_COMP 50

typedef struct horario {
    int hora;
    int minutos;
    int segundos;
}Horario;

typedef struct date {
    int dia;
    int mes;
    int ano;
}Date;

typedef struct agenda {
    Date date;
    Horario horario;
    char descricao[100];
}ag;

void limpaBuffer(){
	int c;
	while((c = getchar()) != '\n' && c != EOF);
}

void procuraPorData(ag Comp[]){
    int i;
    int store[3];
    
    printf("Insira o ano do seu compromisso: ");
    scanf("%i", &store[0]);

    printf("Insira o mes do seu compromisso: ");
    scanf("%i", &store[1]);

    printf("Insira o dia do seu compromisso: ");
    scanf("%i", &store[2]);

    for(i = 0; i < MAX_COMP; i++){
        if(Comp[i].date.ano == store[0] && Comp[i].date.mes == store[1] && Comp[i].date.dia == store[2]){
            printf("\nCompromisso: %s\n", Comp[i].descricao);
            printf("Data: %02i/%02i/%i\n", Comp[i].date.dia, Comp[i].date.mes, Comp[i].date.ano);
            printf("Horario: %02i:%02i:%02i\n\n", Comp[i].horario.hora, Comp[i].horario.minutos, Comp[i].horario.segundos);
            break;
        }
    }
    if(i >= MAX_COMP){
        printf("\nNão há nenhum compromisso marcado nessa data!\n\n");
    }
}

void insere(ag Comp[], int i){
    // Data
    printf("Insira o ano do seu compromisso: ");
    scanf("%i", &Comp[i].date.ano);

    printf("Insira o mes do seu compromisso: ");
    scanf("%i", &Comp[i].date.mes);

    printf("Insira o dia do seu compromisso: ");
    scanf("%i", &Comp[i].date.dia);

    // Hora
    printf("Insira os segundos do horario do seu compromisso: ");
    scanf("%i", &Comp[i].horario.segundos);

    printf("Insira os minutos do horario do seu compromisso: ");
    scanf("%i", &Comp[i].horario.minutos);

    printf("Insira os horario do horario do seu compromisso: ");
    scanf("%i", &Comp[i].horario.hora);

    // Descrição
    limpaBuffer();
    
    printf("Insira a descrição do seu compromisso: ");
    fgets(Comp[i].descricao, sizeof(Comp[i].descricao), stdin);
    limpaBuffer();
    Comp[i].descricao[strcspn(Comp[i].descricao, "\n")] = '\0';
}

int main(){
    ag Comp[MAX_COMP];
    int indiceComp = 0;
    int input;
    
    do{
        printf("Insira o comando (1. Adicionar Compromisso // 2. Pesquisar por data // 3. Sair) > ");
        scanf("%i", &input);
        switch(input){
            case 1:
                insere(Comp, indiceComp);

                printf("Compromisso: %s\n", Comp[indiceComp].descricao);
                printf("Data: %02i/%02i/%i\n", Comp[indiceComp].date.dia, Comp[indiceComp].date.mes, Comp[indiceComp].date.ano);
                printf("Horario: %02i:%02i:%02i\n\n", Comp[indiceComp].horario.hora, Comp[indiceComp].horario.minutos, Comp[indiceComp].horario.segundos);

                indiceComp++;
                break;
            
            case 2:
                procuraPorData(Comp);
                break;

            case 3:
                break;
            }

    }while(input != 3);
    
    return 0;
}