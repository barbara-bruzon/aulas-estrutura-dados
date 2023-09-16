/*ESTRUTURA DE DADOS: Aula 02 - While com char- 19/08/2023
Usando while com char*/

#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	char ch;
	
	while (ch!='q'){
		scanf("%c", &ch);
	}
	return (0);
}
