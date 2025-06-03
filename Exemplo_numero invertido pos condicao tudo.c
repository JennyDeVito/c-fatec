/*imprime numeros invertidos solucao corrigida*/
#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale (LC_ALL, "portuguese");
	int n;
	do {
		printf ("\nDigite um número: ");
		scanf ("%d", &n);
	} while (n < 0);
	printf ("\nInvertido: ");
	do {
		printf ("%d", n%10);
		n = n / 10;
	} while (n !=0);
	return 0;
}
