/*ESTRUTURA DE DADOS: Aula 02 - conta-c - 19/08/2023
Código que conta todos os caracteres C maiúsculos ou minúsculos de uma frase qualquer digitada pelo usuário*/

#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	char frase[100];
	int i, count=0;
	
	printf("Digite uma frase qualquer: ");
	gets(frase);
	printf("\nFrase digitada: %s\n\n", frase);
	
	for(i=0; frase[i]!='\0'; i++){
		if(frase[i]=='c' || frase[i]=='C'){
			count++;
		}
	}
	printf("\tO número de caracteres c é %d\n\n", count);
	return (0);
}
