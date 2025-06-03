/*calcular x elevado a potencia n sem usar pow*/
#include <stdio.h>
#include <locale.h>
int main ()
{
	setlocale (LC_ALL, "portuguese");
	int n, c;
	float x, ini;
	printf ("\nDigite a base da sua potência (um número real): ");
	scanf ("%f", &x);
	do {
		printf ("\nDigite o expoente da sua potência (um número inteiro): ");
		scanf ("%d", &n);
	} while (n < 0);
	ini = x;
	for (c = 1; c < n; c++)
		x = x * ini;
	printf ("\n%0.f elevado a %d é igual a %0.f.", ini, n, x);
	return 0;
}
