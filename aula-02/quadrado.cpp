/*ESTRUTURA DE DADOS: Aula 02 - Quadrado de um número - 19/08/2023
Código para calcular o quadrado de números inteiros digitados pelo usuário até que esse digite 0 para sair do loop*/

#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int num, quad; //Leitura do número e quadrado do número
	
	printf("Digite um número: ");
	scanf("%d", &num);
	
	while (num!=0){
		quad=num*num;
		printf("\nO quadrado de %d é igual a %d", num, quad);
		printf("\n\n----------------------\n\nDigite um número: ");
		scanf("%d", &num);
	}
	
	system("pause");
	return (0);
}
