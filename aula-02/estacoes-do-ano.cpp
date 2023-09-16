/*ESTRUTURA DE DADOS: Aula 02 - switch case - 19/08/2023
Informar a estação do ano a partir do trimestre inserido pelo usuário*/

#include <locale.h>
#include <stdio.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int epoca;
	
	printf("Digite o trimestre do ano em que estamos: ");
	scanf("%d", &epoca);
	
	switch (epoca){
		case 1: 
			printf("\n\nA estação é verão!");
			break;
		case 2:
			printf("\n\nA estação é outono!");
			break;
		case 3:
			printf("\n\nA estação é inverno!");
			break;
		case 4:
			printf("\n\nA estação é primavera!");
			break;
		default: 
			printf("\n\nEsse período é inválido.");
			break;
	}
}
