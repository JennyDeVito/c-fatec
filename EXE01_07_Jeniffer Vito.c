/*imprimir o maior entre dois numeros usando operador ternario*/
#include <stdio.h>
#include <locale.h>
int main () {
	setlocale (LC_ALL, "portuguese");
	int n1, n2;
	printf ("\nDigite o primeiro n�mero: ");
	scanf ("%d", &n1);
	printf ("\nDigite o segundo n�mero: ");
	scanf ("%d", &n2);
	printf ("\nO maior n�mero � %d.", n1>n2? n1: n2);
	return 0;
}
