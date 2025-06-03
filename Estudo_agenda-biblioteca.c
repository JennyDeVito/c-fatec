/*agenda usando estrutura de dados com vetores e entrada de dados do usuário*/
#include <stdio.h>
#include <locale.h>
#include <string.h>
#include "agenda.h"

int main() {
	setlocale (LC_ALL, "portuguese");
	
	int n;
	
	printf ("\n|------------------------------------------------------|");
	printf ("\n|----------------CADASTRO NA AGENDA--------------------|");
	printf ("\n|------------------------------------------------------|\n");
	
	do {
		printf ("\nDigite quantas pessoas quer cadastrar na agenda: ");
		scanf ("%d", &n);
		getchar(); // limpa o buffer 
		if (n <= 0)
			printf ("\nDigite pelo menos 1!");
	} while (n <= 0);
	
	PESSOA agenda[n];
	
	LeAgenda (agenda, n);
	
	system ("cls");

	printf ("\n|------------------------------------------------------|");
	printf ("\n|------------------NOMES CADASTRADOS-------------------|");
	printf ("\n|------------------------------------------------------|\n");

	ImprimeAgenda (agenda, n);
	
	return 0;
}
