#include <stdio.h>
#include <stdlib.h>


int main() {
	
	int dados, numeros[dados], i, soma = 0;
	
	printf("Digite quantos numeros possui nos dados: ");
	scanf("%d", &dados);

	
	for (i = 0; i < dados; i++){
		printf("Digite os numeros: ");
		scanf("%d", &numeros[i]);
		soma = soma + numeros[i];
	}
	
	printf("O resultado da soma eh: %d", soma);
	
	return 0;
}
