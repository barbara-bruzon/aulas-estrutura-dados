/*ESTRUTURA DE DADOS: Aula 02 - puts & gets - 19/08/2023
Relembrando o puts e gets*/

#include <locale.h>
#include <stdio.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	char s[20];
	
	printf("Digite uma string qualquer: ");
	gets(s);
	printf("\n\nString digitada: ");
	puts(s);
	return 0;
}
