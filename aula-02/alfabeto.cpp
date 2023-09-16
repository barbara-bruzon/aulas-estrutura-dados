/*ESTRUTURA DE DADOS: Aula 02 - Imprimir o Alfabeto com as letras maiúsculas - 19/08/2023
Código para imprimir o alfabeto com todas as letras maiúsculas*/

#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	char letra;
	
	for(letra='A'; letra<='Z'; letra++){
		printf("%c\n", letra);
	}
	return (0);
}
