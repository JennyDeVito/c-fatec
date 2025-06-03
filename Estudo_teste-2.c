/*funcao com parametro e entrada de dados com validacao*/
#include <stdio.h>
void cumprimentos(char c) {
	switch(c)
	{
		case 'N': printf ("\nBoa noite!"); break;
		case 'T': printf ("\nBoa tarde!"); break;
		default: printf ("\nBom dia!");
	}
}
int main()
{
	char d;
	do {
		printf ("\nDigite M, T ou N: ");
		scanf (" %c", &d);
	} while (d != 'M' && d!= 'T' && d != 'N');
	cumprimentos(d);
	return 0;
}
