/*ESTRUTURA DE DADOS: Aula 02 - while2- 19/08/2023
Imprimindo números de 0 a 100 para relembrar a estrutura de repetição while.*/

#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int i=0;
	
	while (i<100){
		printf("%d\n", i);
		i++;
	}
	
	system("pause");
	return (0);
}
