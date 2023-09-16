/*Estrutura de Dados: Exercício 05 - Celsius2Fahrenheit - 26.08.2023
05. Ler uma temperatura em graus Celsius e transformá-la em graus Fahrenheit.
Fórmula: F = (9*C+160)/5 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float celsius, fahrenheit;
	
	printf("Insira uma temperatura em Celsius: ");
	scanf("%f", &celsius);
	
	fahrenheit = 1.8*celsius+32;
	printf("\n\n%.2f°C = %.2f°F", celsius, fahrenheit);
	return 0;
}
