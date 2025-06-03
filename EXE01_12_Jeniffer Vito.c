/*le os ultimos quatro numeros da placa e diz o dia do rod�zio*/
#include <stdio.h>
#include <locale.h>
int main() {
	setlocale (LC_ALL, "portuguese");
	int f, ud;
	do {
		printf ("\nDigite os �ltimos quatro n�meros da placa do carro: ");
		scanf ("%d", &f);
		if (f < 1000 || f > 9999)
			printf ("\nDigite um n�mero de quatro d�gitos!");
	} while (f < 1000 || f > 9999);
	ud = f % 10;
	switch (ud) {
		case 1:
		case 2:
			printf ("\nSeu rod�zio � na segunda-feira!");
			break;
		case 3:
		case 4:
			printf ("\nSeu rod�zio � na ter�a-feira!");
			break;
		case 5:
		case 6:
			printf ("\nSeu rod�zio � na quarta-feira!");
			break;
		case 7:
		case 8:
			printf ("\nSeu rod�zio � na quinta-feira!");
			break;
		case 9:
		case 0:
			printf ("\nSeu rod�zio � na sexta-feira!");
			break;
		default:
			printf("\nDigite um final de placa v�lido!");
			break;
	}
	return 0;
}
