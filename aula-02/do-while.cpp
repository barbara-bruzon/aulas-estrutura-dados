/*ESTRUTURA DE DADOS: Aula 02 - do-while - 19/08/2023
Código para relembrar a estrutura do laço de repetição do...while*/

#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int i;
	
	do{
		printf("Escolha a fruta pelo número:\n");
		printf("\t[1] - Mamão\n");
		printf("\t[2] - Abacaxi\n");
		printf("\t[3] - Laranja\n");
		scanf("%d", &i);
	} while((i<1) || (i>3));
	
	switch(i){
		case 1:
			printf("\nVocê escolheu Mamão\n\n");
			break;
		case 2:
			printf("\nVocê escolheu Abacaxi\n\n");
			break;
		case 3:
			printf("\nVocê escolheu Laranja\n\n");
			break;
	}
	system("pause");
	return (0);
}
