/*Estrutura de Dados: Exercício 01 - Mostrando dados com Struct - 16.09.2023
01. Crie uma aplicação utilizando uma estrutura. Ela deverá receber, matricula e uma nota de uma pessoa. Mostre esses dados (Struct básica)*/

#include <stdio.h>  
#include <locale.h>

typedef struct{
	int matricula;
	float nota;
} Dados;
	

int main(){
	setlocale(LC_ALL, "Portuguese");
	Dados pessoa;

	printf("Bem-vindo a atividade!\n\nInsira a matrícula: ");
	scanf("%i", &pessoa.matricula);
	printf("Insira a nota: ");
	scanf("%f", &pessoa.nota);
	
	printf("\n\n\nAqui estão os dados inseridos:\nMatricula: %i\nNota: %.2f", pessoa.matricula, pessoa.nota);
	return 0;
}

