/*calcula o fatorial de um numero com do while*/
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
	in = n;
	do {
		fa *= n; //a forma compacta substitui a expressao fa = fa * n;
		n--; //a forma compacta substitui a expressao n = n - 1;
	} while (n > 0); //inverteu a logica sem necessidade
	printf ("\n%d!= %d.", in, fa);
	return 0;
}
