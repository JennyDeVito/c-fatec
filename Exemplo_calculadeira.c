#include <stdio.h>
#include <locale.h>

int main() 
{
	setlocale (LC_ALL, "portuguese");
	float x, y;
	char op;
	printf ("\nDigite a expressão: ");
	scanf ("%f %c %f", &x, &op, &y);
	switch (op) {
		case '+': 
			printf ("\nO resultado é = %.2f", x + y);
			break;
		case '-': 
			printf ("\nO resultado é = %.2f", x - y);
			break;
		case '*': 
			printf ("\nO resultado é = %.2f", x * y);
			break;
		case '/': 
			if (y == 0){
				printf ("Não existe divisão por zero!");
			}
			else
				printf ("\nO resultado é = %.2f", x / y);
			break;
		default: 
			printf ("\nOperador inválido: %c", op);
	}
	return 0;
} 

