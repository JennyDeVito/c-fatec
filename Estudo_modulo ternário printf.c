#include <stdio.h>
int main()
{
	float n;
	printf ("\nDigite um n%cmero: ", 163);
	scanf ("%f", &n);
	printf ("O valor absoluto digitado %c: %0.f", 130, n < 0? -n: n);
	return 0;
}
