/*ESTRUTURA DE DADOS: Aula 01 - Variaveis - 12/08/2023
Relembrando a estrutura para imprimir na tela diversos tipos de variáveis em C*/

#include <locale.h>
#include <stdio.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	printf("Valor inteiro atribuído foi %d para o caracter %c e um float foi de %.2f", 99, 'a', 1.45);
	return(0);
}
