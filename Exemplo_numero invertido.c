/*imprime numeros invertidos*/
#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale (LC_ALL, "portuguese");
	int n;
	printf ("\nDigite um n�mero: ");
	scanf ("%d", &n);
	while (n < 0) {
		printf ("\nDigite um n�mero maior que zero! \n");
		scanf ("%d", &n);
	}
	printf ("\nInvertido: ");
	while (n !=0) {
		printf ("%d", n%10);
		n = n / 10;
	}
	return 0;
}
