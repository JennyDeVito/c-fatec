/*calcula o fatorial de um numero com for*/
#include <stdio.h>
#include <locale.h>
int main() 
{
	setlocale (LC_ALL, "portuguese");
	int n, in, fa = 1; //fa = 1 pode ser inicializada no inicio
	do {
		printf ("\nDigite um número inteiro maior que zero: ");
		scanf ("%d", &n);
	} while (n < 0);
	for (in = n; in > 0; in--) //nao entendi porque passamos a usar in com o for...
		fa *= in;
	printf ("\n%d!= %d.", n, fa);
	return 0;
}
