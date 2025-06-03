/*imprime tres numeros em ordem crescente*/
#include <stdio.h>
#include <locale.h>
int main() {
	setlocale (LC_ALL, "portuguese");
	int n1, n2, n3, temp;
	printf ("\nDigite o primeiro número: ");
	scanf ("%d", &n1);
	printf ("\nDigite o segundo número: ");
	scanf ("%d", &n2);
	printf ("\nDigite o terceiro número: ");
	scanf ("%d", &n3);
	if (n1 > n2) {
		temp = n1;
		n1 = n2;
		n2 = temp;
	}
	if (n1 > n3) {
		temp = n1;
		n1 = n3;
		n3 = temp;
	}
	if (n2 > n3) {
		temp = n2;
		n2 = n3;
		n3 = temp;
	}
	printf ("\nOs números, em ordem crescente, são: %d, %d e %d.", n1, n2, n3);
	return 0;
}
