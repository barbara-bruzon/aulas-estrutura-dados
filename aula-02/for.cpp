/*ESTRUTURA DE DADOS: Aula 02 - for - 19/08/2023
Código que imprim na tela os números de 1 a 100 para relembrar a estrutura de repetição for*/

#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int i;
	
	for(i=1; i<=100; i++){
		printf("%d\n", i);
	}
	return (0);
}
