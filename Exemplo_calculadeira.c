#include <stdio.h>
#include <locale.h>

int main() 
{
	setlocale (LC_ALL, "portuguese");
	float x, y;
	char op;
	printf ("\nDigite a express�o: ");
	scanf ("%f %c %f", &x, &op, &y);
	switch (op) {
		case '+': 
			printf ("\nO resultado � = %.2f", x + y);
			break;
		case '-': 
			printf ("\nO resultado � = %.2f", x - y);
			break;
		case '*': 
			printf ("\nO resultado � = %.2f", x * y);
			break;
		case '/': 
			if (y == 0){
				printf ("N�o existe divis�o por zero!");
			}
			else
				printf ("\nO resultado � = %.2f", x / y);
			break;
		default: 
			printf ("\nOperador inv�lido: %c", op);
	}
	return 0;
} 

