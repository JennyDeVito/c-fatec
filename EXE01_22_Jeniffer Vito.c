/*calcula serie geometrica infinita*/
#include <stdio.h>
#include <locale.h>
#include <math.h>
int main() {
	setlocale (LC_ALL, "portuguese");
	double x, soma = 0; //se usar float o programa não respondera para valores muito grandes
	int n, c = 0;
	printf ("\nDigite a base da sua potência a ser somada: ");
	scanf ("%lf", &x);
	do {
		printf ("\nDigite quantas parcelas da série geométrica irá somar: ");
		scanf ("%d", &n);
		if (n < 0) {
			printf ("\nVocê deve digitar um numero maior ou igual a zero!");
		}
	} while (n < 0);
	for (c = 0; c <= n; c++) {
		soma = soma + pow(x,c);
	}
	printf ("\nO resultado da série geométrica é %.2lf.", soma);
	return 0;
}
	



