#include <stdio.h>
void cumprimentos(char c) {
	switch(c){
		case 'N': printf ("\nBoa noite!"); break;
		case 'T': printf ("\nBoa tarde!"); break;
		default: printf ("\nBom dia!");
	}
}
int main()
{
	char d = ' '; // Inicializar d com um espaço
	do {
		printf ("\nDigite M, T ou N: ");
		getchar(); // Consumir o caractere de nova linha
		scanf (" %c", &d); 
		if (d != 'M' && d != 'T' && d != 'N') {
			printf ("\nCaractere inválido. Digite M, T ou N: ");
		}
	} while (d != 'M' && d!= 'T' && d != 'N');
	cumprimentos(d);
	return 0;
}

