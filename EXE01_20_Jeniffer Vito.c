/*calcular potencia sem usar pow*/
#include <stdio.h>
#include <locale.h>
int main() {
	setlocale (LC_ALL, "portuguese");
	int e, c = 1;
	float b, pot = 1;
	printf ("\nDigite a base da sua potência: ");
	scanf ("%f", &b);
	do {
		printf ("\nDigite o expotente da sua potência: ");
		scanf ("%d", &e);
		if (e < 0) {
			printf ("\nSeu expoente deve ser um número maior ou igual a zero!\n");
		}
	} while (e < 0);
	if (e == 0) {
		pot = 1;
	}
	for (c = 1;c <= e; c++) {
		pot = pot * b;
		//printf ("\n%.0f", pot); //teste das iteracoes
	}
	printf ("\n%0.f elevado a %d é igual a %.2f", b, e, pot);
	return 0;
}
