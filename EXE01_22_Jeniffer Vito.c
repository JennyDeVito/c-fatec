/*calcula serie geometrica infinita*/
#include <stdio.h>
#include <locale.h>
#include <math.h>
int main() {
	setlocale (LC_ALL, "portuguese");
	double x, soma = 0; //se usar float o programa n�o respondera para valores muito grandes
	int n, c = 0;
	printf ("\nDigite a base da sua pot�ncia a ser somada: ");
	scanf ("%lf", &x);
	do {
		printf ("\nDigite quantas parcelas da s�rie geom�trica ir� somar: ");
		scanf ("%d", &n);
		if (n < 0) {
			printf ("\nVoc� deve digitar um numero maior ou igual a zero!");
		}
	} while (n < 0);
	for (c = 0; c <= n; c++) {
		soma = soma + pow(x,c);
	}
	printf ("\nO resultado da s�rie geom�trica � %.2lf.", soma);
	return 0;
}
	



