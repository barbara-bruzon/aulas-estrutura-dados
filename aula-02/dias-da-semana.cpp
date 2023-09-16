/*ESTRUTURA DE DADOS: Aula 02 - switch case2 - 19/08/2023
Informar o dia da semana correspondente ao número digitado pelo usuário*/

#include <locale.h>
#include <stdio.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int epoca;
	
	printf("Digite um número do dia da semana: ");
	scanf("%d", &epoca);
	
	switch (epoca){
		case 1: 
			printf("\n\nO dia da semana é Domingo");
			break;
		case 2:
			printf("\n\nO dia da semana é Segunda-feira");
			break;
		case 3:
			printf("\n\nO dia da semana é Terça-feira");
			break;
		case 4: 
			printf("\n\nO dia da semana é Quarta-feira");
			break;
		case 5:
			printf("\n\nO dia da semana é Quinta-feira");
			break;
		case 6:
			printf("\n\nO dia da semana é Sexta-feira");
			break;
		case 7:
			printf("\n\nO dia da semana é Sábado");
			break;
		default: 
			printf("\n\nEsse não é um dia da semana");
			break;
	}
	return 0;
}
