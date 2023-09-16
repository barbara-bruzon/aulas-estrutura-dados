/*Estrutura de Dados: Exercício 07 - Segundos2HorasMinutosSegundos - Barbara Bruzon
07. Fazer um programa para receber um número inteiro de segundos do usuário e imprimir a quantidade correspondente em horas, minutos e segundos*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int segundos, horas = 0, minutos = 0;
	
	printf("Insira uma quantidade qualquer de segundos: ");
	scanf("%d", &segundos);
	
	horas = segundos/3600;
	segundos = segundos%3600;
	minutos = segundos/60;
	segundos = segundos%60;
	
	printf("\nA conversão resultou em %dh%dmin%ds...\nHoras = %d\nMinutos = %d\nSegundos = %d", horas, minutos, segundos, horas, minutos, segundos);
	
	return 0;
}
