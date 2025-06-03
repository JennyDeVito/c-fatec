/*diz se um numero é primo ou nao sem break*/
#include <stdio.h>
#include <locale.h>
int main ()
{
	setlocale (LC_ALL, "portuguese");
	int n, k;
	do {
		printf ("\nDigite um número maior que zero: ");
		scanf ("%u", &n); //se eh %u entao nao precisa validar com <=0?
	} while (n <= 0);
	
}
