/*ESTRUTURA DE DADOS: Aula 02 - gets - 19/08/2023
Relembrando outras maneiras de receber entradas do usuário*/

#include <locale.h>
#include <stdio.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	char s[20];
	
	printf("Digite uma string qualquer: ");
	gets(s);
	printf("\n\nString digitada: %s", s);
	return 0;
}
