/*Estrutura de Dados: Exercício 06 - Idades de um grupo - 26.08.2023
01. Solicitar a idade de várias pessoas e imprimir: total de pessoas com menos de 21 anos. Total de pessoas com mais de 50 anos.
O programa termina quando a idade digitada for = 99 (utiliza while e if).*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int idade, i=1, menoridade=0, maioridade=0;
	
	printf("Insira a idade das pessoas do seu grupo ou digite 99 para sair.\n\n");
	while (idade != 99){
		printf("Digite a idade %d: ", i);
		scanf("%d", &idade);
		
		if(idade<21){
			menoridade++;
		}
		
		if(idade>50 && idade!=99){
			maioridade++;
		}
		
		i++;
	}
	
	printf("\n[Saindo...]\n\nPessoas menores de 21 anos: %d\nPessoas maiores de 50 anos: %d", menoridade, maioridade);
	return 0;
}
