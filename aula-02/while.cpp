/*ESTRUTURA DE DADOS: Aula 02 - while- 19/08/2023
Imprimindo os números de 0 a 10 para relembrar a estrutura do laço de repetição while*/

#include <locale.h>
#include <stdio.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int i=0;
	
	while (i<=10){
		printf("Número %d\n", i);
		i++;
	}
	
	return 0;
}
