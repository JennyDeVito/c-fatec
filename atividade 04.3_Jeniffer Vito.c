/*calcula o fatorial de um numero*/
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
	while (n > 0) { //usar o do while aqui nao economiza comando, fica mais limpo so com while
		fa *= n; //a forma compacta substitui a expressao fa = fa * n;
		n--; //a forma compacta substitui a expressao n = n - 1;
	}
	printf ("\n%d!= %d.", in, fa);
	return 0;
}
