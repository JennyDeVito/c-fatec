/*calcula a soma de uma sequencia pre determinada de numeros*/
#include <stdio.h>
#include <locale.h>
int main () {
	setlocale (LC_ALL, "portuguese");
	int n, c = 1;
	float num, soma = 0;
	do {
		printf ("\nDigite quantos n�meros ter�o sua sequ�ncia: ");
		scanf ("%d", &n);
		if (n <= 0) {
			printf ("\nDigite um n�mero maior que zero!\n");
		}
	} while (n <= 0);
	for (c = 1; c <= n; c++) {
		printf ("\nDigite o %d� n�mero da sua sequ�ncia: ", c);
		scanf ("%f", &num);
		soma = soma + num;
	}
	printf ("\nA soma da sequ�ncia de %d n�meros digitados � %.0f.", n, soma);
	return 0;
}
