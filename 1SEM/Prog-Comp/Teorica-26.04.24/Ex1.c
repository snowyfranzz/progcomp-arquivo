#include <stdio.h>

void imprimeIdade(int idade){
	printf("Idade: %i\n", idade);
}

int somaNums(int num1, int num2){
	int soma;
	soma = num1 + num2;
	
	return soma;
}

int main(){
	int A = 10, B = 5, idadeUsuario = 17, soma;
	
	imprimeIdade(idadeUsuario);
	soma = somaNums(A, B);

    printf("Soma dos numeros: %i\n", soma);
	
	return 0;
}