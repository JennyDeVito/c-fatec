/*calcula o quadrado de um numero pela soma de seus n primeiros impares consecutivos*/
#include <stdio.h>
#include <locale.h>
int main ()
{
	setlocale (LC_ALL, "portuguese");
	int n, c, i = 0;
	do {
		printf ("\nDigite um número natural: ");
		scanf ("%d", &n);
	} while (n <= 0);
	for (c = 1; i < n * n; c = c + 2)
		i = i + c;
	printf ("\nO quadrado de %d é %d.", n, i);
	return 0;
}
