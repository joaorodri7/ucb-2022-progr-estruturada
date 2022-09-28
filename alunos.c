#include <stdio.h>
#include <stdlib.h>


int main() {
	
	int alunos;
	float notas[alunos];
	int i;
	
	printf("Digite o numero de alunos: ");
	scanf("%d", &alunos);
	
	for (i = 0; i < alunos; i++){
		printf("Digite a nota do aluno: ");
		scanf("%f", &notas[i]);
	}
	
	for (i = 0; i < alunos; i++){
		printf("%0.2f\n", notas[i]);
	}
	
	
	return 0;
}
