/*le os ultimos quatro numeros da placa e diz o dia do rodízio*/
#include <stdio.h>
#include <locale.h>
int main() {
	setlocale (LC_ALL, "portuguese");
	int f, ud;
	do {
		printf ("\nDigite os últimos quatro números da placa do carro: ");
		scanf ("%d", &f);
		if (f < 1000 || f > 9999)
			printf ("\nDigite um número de quatro dígitos!");
	} while (f < 1000 || f > 9999);
	ud = f % 10;
	switch (ud) {
		case 1:
		case 2:
			printf ("\nSeu rodízio é na segunda-feira!");
			break;
		case 3:
		case 4:
			printf ("\nSeu rodízio é na terça-feira!");
			break;
		case 5:
		case 6:
			printf ("\nSeu rodízio é na quarta-feira!");
			break;
		case 7:
		case 8:
			printf ("\nSeu rodízio é na quinta-feira!");
			break;
		case 9:
		case 0:
			printf ("\nSeu rodízio é na sexta-feira!");
			break;
		default:
			printf("\nDigite um final de placa válido!");
			break;
	}
	return 0;
}
