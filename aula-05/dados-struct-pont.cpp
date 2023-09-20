/*Estrutura de Dados: Exercício 02 - Mostrando dados com Struct e Ponteiro - 16.09.2023
2) Crie uma aplicação utilizando um ponteiro para uma estrutura. Ela deverá receber matricula e uma nota de uma pessoa.
Em seguida mostre esses dados (utilizar ponteiro e malloc)*/

#include <stdio.h>  
#include <locale.h>
#include <malloc.h>

typedef struct{
	int matricula;
	float nota;
} Dados;

int main(){
	setlocale(LC_ALL, "Portuguese");	
	Dados* pessoa = (Dados*) malloc(sizeof(Dados));

	printf("Bem-vindo a atividade!\n\nInsira a matrícula: ");
	scanf("%i", &pessoa->matricula);
	printf("Insira a nota: ");
	scanf("%f", &pessoa->nota);
	
	printf("\n\n\nAqui estão os dados inseridos:\nMatricula: %i\nNota: %.2f", pessoa->matricula, pessoa->nota);
	return 0;
}

