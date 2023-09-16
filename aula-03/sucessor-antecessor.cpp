/*Estrutura de Dados: Exercício 01 - Antecessor e Sucessor - 26.08.2023
Enunciado 01. Ler um número inteiro e imprimir seu sucessor e seu antecessor*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int num;
	
	printf("Insira um número inteiro qualquer: ");
	scanf("%d", &num);
	printf("\n\n\nO antecessor desse número é %d.\nO sucessor desse número é %d", num-1, num+1);
	return 0;
}
