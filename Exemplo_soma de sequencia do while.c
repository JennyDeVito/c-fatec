/*soma de sequencia usando while*/
#include <stdio.h>
#include <locale.h>
int main ()
{
	setlocale (LC_ALL, "portuguese");
	int num, soma=0;
	printf ("\nDigite uma sequ�ncia terminada por zero: \n");
	do {
		scanf ("%d", &num);
		soma = soma + num;
	} 
	while (num != 0);
	printf ("\nSoma da sequ�ncia: %d", soma);
	return 0;
}
