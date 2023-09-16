/*Estrutura de Dados: Exercício 03 - Lucro do comerciante - 26.08.2023
03. Um comerciante comprou um produto e quer vendê-lo com um lucro de 45% se o valor da compra for menor que R$20,00;
caso contrário, o lucro será de 30%. Entre com o valor do produto e imprima o valor da venda.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float produto;
	
	//Usar a vírgula para separar as casas decimais
	printf("Insira o valor do produto: ");
	scanf("%f", &produto);
	
	if (produto < 20){
		printf("\n\nEsse produto receberá um acréscimo de 45%% em seu valor...\nValor total: R$%.2f", produto*1.45);
	} else {
		printf("\n\nEsse produto receberá um acréscimo de 30%% em seu valor...\nValor total: R$%.2f", produto*1.3);
	}
	return 0;
}
