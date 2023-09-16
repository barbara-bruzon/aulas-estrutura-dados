/*ESTRUTURA DE DADOS: Aula 01 - scanf & printf - 12/08/2023
Código para relembrar estrutura do printf e scanf no C*/

#include <locale.h>
#include <stdio.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int idade;
	
	printf("Entre com a sua idade: ");
	scanf("%i",&idade); //& é o endereçamento
	printf("\n\nA idade digitada foi %i", idade);	
	return(0);
}
