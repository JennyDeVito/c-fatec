/*possivel solucao para calcular o quadrado de um numero pela soma de seus n primeiros impares consecutivos*/
#include <stdio.h>
#include <locale.h>
int main ()
{
	int n, i, quad = 0, impar = 1;
	printf ("\nDigite n: ");
	scanf ("%d", &n);
	for (i = 0; i < n; i++) {
		quad = quad + impar;
		impar += 2;
	}
	printf ("%d", quad);
	return 0;
}
