/*imprime o quadrado de cada numero da sequencia*/
#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale (LC_ALL, "portuguese");
	int n;
	do {
		printf ("\nDigite um n�mero inteiro diferente de zero: ");
		scanf ("%d", &n);
		printf ("\nO quadrado de %d �: %d", n, n*n);
	} while (n != 0);
	return 0;
}
