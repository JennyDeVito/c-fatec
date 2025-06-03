/*fatorial com funcao recursiva*/
#include <stdio.h>
#include <locale.h>

int fat (int n) {
	if (n == 0) 
		return 1;
	return (n * fat(n-1));
}

int main () {
	setlocale (LC_ALL, "portuguese");
	int x, resultado;
	do {
		printf ("\nDigite o n�mero que quer o fatorial: ");
		scanf ("%d", &x);
		if (x < 0) 
			printf ("\nDigite um n�mero maior ou igual a zero!");
	} while (x < 0);
	resultado = fat(x);
	printf ("\nO fatorial de %d � %d", x, resultado);
	return 0;
}
