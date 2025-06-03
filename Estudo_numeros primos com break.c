/*diz se um numero eh primo ou nao com break*/
#include <stdio.h>
int main ()
{
	int n, k;
	printf ("\nDigite um numero natural: ");
	scanf ("%u", &n);
	for (k = 2; k < n; k++)
		if (n % k == 0) break;
	if (k == n)
		printf ("\nPrimo");
	else
		printf ("\nNao primo");
	return 0;
}
