/*diz se eh primo ou nao sem break*/
#include <stdio.h>
int main ()
{
	int n, k;
	printf ("\nDigite um numero natural: ");
	scanf ("%u", &n);
	k = 1;
	do {
		k++;
	} while (n % k != 0);
	if (k == n)
		printf ("\nPrimo");
	else
		printf ("\nNao primo");
	return 0;
}
