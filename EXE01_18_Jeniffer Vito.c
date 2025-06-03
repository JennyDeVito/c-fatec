/*calcula a media de uma sequencia pre determinada de numeros*/
#include <stdio.h>
#include <locale.h>
int main () {
	setlocale (LC_ALL, "portuguese");
	int n, c = 1;
	float num, soma = 0, med;
	do {
		printf ("\nDigite quantos números terão sua sequência: ");
		scanf ("%d", &n);
		if (n <= 0) {
			printf ("\nDigite um número maior que zero!\n");
		}
	} while (n <= 0);
	for (c = 1; c <= n; c++) {
		printf ("\nDigite o %dº número da sua sequência: ", c);
		scanf ("%f", &num);
		soma = soma + num;
		med = soma / c;
	}
	printf ("\nA soma da sequência de %d números digitados é %.0f.\nE a média dos números digitados é %0.f.", n, soma, med);
	return 0;
}
