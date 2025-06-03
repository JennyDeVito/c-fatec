/*funcao recursiva que converte para binário*/

#include <stdio.h>
#include <locale.h>

void binario (int n) {
	if (n < 2) { //solucao trivial
		printf ("%d", n);
		return;
	}
	binario (n / 2);
	printf ("%d", n % 2);
}

int main () {
	setlocale (LC_ALL, "portuguese");
	
	int x;
	
	do {
		printf ("\nDigite o número que quer converter: ");
		scanf ("%d", &x);
		if (x < 0)
			printf ("\nDigite um número maior ou igual a zero!");
	} while (x < 0);
	
	printf ("\nConvertido em binário: ");
	binario(x);
	
	return 0;
}
