/*imprime o maior de tres numeros*/
#include <stdio.h>
#include <locale.h>
int main() {
	setlocale (LC_ALL, "portuguese");
	int n1, n2, n3;
	printf ("\nDigite o primeiro n�mero: ");
	scanf ("%d", &n1);
	printf ("\nDigite o segundo n�mero: ");
	scanf ("%d", &n2);
	printf ("\nDigite o terceiro n�mero: ");
	scanf ("%d", &n3);
	if (n1 > n2 && n1 > n3)
		printf ("\n%d � o maior n�mero!", n1);
	else
		if (n2 > n1 && n2 > n3)
			printf ("\n%d � o maior n�mero!", n2);
		else
			printf ("\n%d � o maior n�mero!", n3);
	return 0;
}
