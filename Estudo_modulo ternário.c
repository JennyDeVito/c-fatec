/*imprimir valor absoluto usando operador condicional ternario*/
#include <stdio.h>
int main ()
{
	float n, ab;
	printf ("\nDigite um n%cmero: ", 163);
	scanf ("%f", &n);
	ab = n < 0? -n : n;
	printf ("\nO valor absoluto de %.0f, %c %.0f", n, 130, ab);
	return 0;
}
