/*imprimir valor absoluto com estrutura de decisão comum*/
#include <stdio.h>
int main()
{
	float n;
	printf ("\nDigite um n%cmero: ", 163);
	scanf ("%f", &n);
	if (n < 0){
		n = -n;
	}
	printf ("\nO m%cdulo %c: %.0f", 162, 130, n);
	return 0;
}
