#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	float nota1[3], nota2[3], media[3];
	int i;
	for (i=0; i<3; i++){
		printf("Digite a nota 1: ");
		scanf("%f", &nota1[i]);
	}
	for (i=0; i<3; i++){
		printf("Nota1: %f\n", nota1[i]);
	}
	for (i=0; i<3; i++){
		printf("Digite a nota 2: ");
		scanf("%f", &nota2[i]);
	}
	for (i=0; i<3; i++){
		printf("Nota2: %f\n", nota2[i]);
	}
	for (i=0; i<3; i++){
		media[i] = (nota1[i] + nota2[i])/2;
		printf("Media eh igual: %f\n\n\n ", media[i]);
	}

	
	return 0;
}
