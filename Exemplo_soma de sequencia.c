/*soma de sequencia usando while*/
#include <stdio.h>
#include <locale.h>
int main ()
{
	setlocale (LC_ALL, "portuguese");
	int num, soma=0;
	printf ("\nDigite uma sequ�ncia terminada por zero: \n");
	scanf ("%d", &num);
	while (num != 0) {
		soma = soma + num;
		scanf ("%d", &num);
	}
	printf ("\nSoma da sequ�ncia: %d", soma);
	return 0;
}
