/*ESTRUTURA DE DADOS: Aula 01 - Venus - 12/08/2023
Usando a biblioteca locale.h para conseguir utilizar acentos e similares*/

#include <locale.h>
#include <stdio.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	printf("%s está a %d milhões de milhas do sol", "Vênus", 67) 	
	return(0);
}
