/*funcao com parametro*/
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
	cumprimentos('N');
	return 0;
}
