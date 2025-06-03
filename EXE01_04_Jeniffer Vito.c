/*receber dois numeros e imprimi-los em ordem crescente*/
#include <stdio.h>
#include <locale.h>
int main() {
	setlocale (LC_ALL, "portuguese");
	int n1, n2;
	printf ("\nDigite o primeiro número: ");
	scanf ("%d", &n1);
	printf ("\nDigite o segundo número: ");
	scanf ("%d", &n2);
	if (n1 < n2) {
		printf ("\n%d \n%d", n1, n2);
	}
	else 
		printf ("\n%d \n%d", n2, n1);
	return 0;
}
