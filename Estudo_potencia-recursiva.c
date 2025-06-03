/*potencia recursiva sem unsigned*/
#include <stdio.h>
#include <locale.h>

double pot(double x, int y) {
	if (y == 0)
		return 1;
	if (y == 1) 
		return x;
	return x * pot(x, y - 1);
}

int main() {
	setlocale (LC_ALL, "portuguese");
	double a, resultado;
	int b;
	
	printf("\nDigite a base da potência: ");
	scanf ("%lf", &a);
	
	do {
		printf("\nDigite o expoente da sua potência: ");
		scanf("%d", &b);
		if (b < 0)
			printf("\nDigite um número maior ou igual a zero!");
	} while (b < 0);
	
	resultado = pot(a, b);
	
	printf("\n%.0lf elevado a %u: %.0lf", a, b, resultado);
	
	return 0;
}
