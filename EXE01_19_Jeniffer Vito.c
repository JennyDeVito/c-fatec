/*calcula a soma, a media e mostra o maior e o menor numero de uma sequencia pre determinada*/
#include <stdio.h>
#include <locale.h>
int main () {
	setlocale (LC_ALL, "portuguese");
	int n, c = 1;
	float num, soma = 0, med, maior = 0, menor = 9999999;
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
		med = soma / c;
		if (num > maior) {
			maior = num;
		}
		if (num < menor) {
			menor = num;
		}
	}
	printf ("\nA soma da sequ�ncia de %d n�meros digitados � %.0f e a m�dia � %0.f.\nO maior n�mero digitado foi %.0f e o menor n�mero digitado foi %.0f.", n, soma, med, maior, menor);
	return 0;
}
