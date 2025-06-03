/*imprimir o maior entre dois numeros usando operador ternario*/
#include <stdio.h>
#include <locale.h>
int main () {
	setlocale (LC_ALL, "portuguese");
	int n1, n2;
	printf ("\nDigite o primeiro número: ");
	scanf ("%d", &n1);
	printf ("\nDigite o segundo número: ");
	scanf ("%d", &n2);
	printf ("\nO maior número é %d.", n1>n2? n1: n2);
	return 0;
}
