/*imprime tres numeros em ordem crescente*/
#include <stdio.h>
#include <locale.h>
int main() {
	setlocale (LC_ALL, "portuguese");
	int n1, n2, n3, temp;
	printf ("\nDigite o primeiro n�mero: ");
	scanf ("%d", &n1);
	printf ("\nDigite o segundo n�mero: ");
	scanf ("%d", &n2);
	printf ("\nDigite o terceiro n�mero: ");
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
	printf ("\nOs n�meros, em ordem crescente, s�o: %d, %d e %d.", n1, n2, n3);
	return 0;
}
