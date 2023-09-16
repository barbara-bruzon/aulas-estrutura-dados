/*Estrutura de Dados: Exercício 08 - Média de valores - 26.08.2023
Enunciado 08. Fazer um programa para receber 3 valores inteiros do usuário e mostrar a sua média (que não pode ser inteira).*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float n1, n2, n3, media;
	
	printf("Insira três valores inteiros: ");
	scanf("%f %f %f", &n1, &n2, &n3);
	
	media = (n1+n2+n3)/3;
	printf("\n\nA média desses números é %.2f", media);
	return 0;
}
