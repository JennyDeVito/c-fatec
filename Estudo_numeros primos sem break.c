/*diz se um numero � primo ou nao sem break*/
#include <stdio.h>
#include <locale.h>
int main ()
{
	setlocale (LC_ALL, "portuguese");
	int n, k;
	do {
		printf ("\nDigite um n�mero maior que zero: ");
		scanf ("%u", &n); //se eh %u entao nao precisa validar com <=0?
	} while (n <= 0);
	
}
