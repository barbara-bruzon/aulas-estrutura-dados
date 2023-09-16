/*ESTRUTURA DE DADOS: Aula 02 - scanf para Strings - 19/08/2023
Relembrando como usar o scanf para strings*/

#include <locale.h>
#include <stdio.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	char s[20];
	
	printf("Digite uma string qualquer: ");
	scanf("%s", s); //Não precisa colocar o & antes do nome da variável. Só dá certo por ser String
	printf("\n\nString digitada: %s", s);
	return 0;
}
