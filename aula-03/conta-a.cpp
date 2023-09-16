/*Estrutura de Dados: Exercício 04 - Contar As - 26.08.2023
04. Receber um nome no teclado e imprimir quantas letras "A" tem o nome.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <cstring>

int main(){
	setlocale(LC_ALL, "Portuguese");
	char nome[25];
	int i, quant = 0;
	
	printf("Digite um nome qualquer: ");
	scanf("%s", nome);
	
	for(i=0; i<=strlen(nome); i++){
		if(nome[i] == 'A' || nome[i] == 'a'){
			quant++;
		}
	}
	
	printf("\n\nA quantidade de letras A nesse nome é %d", quant);
	return 0;
}
