/*conta os caracteres de uma string*/

#include <stdio.h>
#include <locale.h>
#include <string.h>

/*chamar a funcao de strlen da conflito com a strlen da biblioteca string.h
por isso, foi chamada de strcont*/

int strcont(char s[101]) { 
	int i, cont = 0;
	
	for (i = 0; s[i] != '\0'; i++) {
		cont += 1;
	}
	return cont;
}

int main() {
	setlocale(LC_ALL, "portuguese");
	
	int total;
	char frase[101];
	
	printf("\nDigite uma frase de até 100 caracteres: ");
	fgets(frase, sizeof(frase), stdin);
	frase[strcspn(frase, "\n")] = '\0';
	
	total = strcont(frase);
	
	printf("\nSua frase contém %d caracteres.", total);
	
	return 0;
}
