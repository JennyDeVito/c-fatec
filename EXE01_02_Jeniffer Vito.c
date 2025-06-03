/*calcula o numero de diagonais de um poligono*/
#include <stdio.h>
#include <locale.h>
int main () {
	setlocale (LC_ALL, "portuguese");
	int nl, nd;
	do {
		printf ("\nDigite o n�mero de lados do seu pol�gono: ");
		scanf ("%d", &nl); 
		if (nl < 3) {
			printf ("\nSeu pol�gono deve ter pelo menos tr�s lados!");
		}
	} while (nl <= 3);
	nd = (nl*(nl-3))/2;
	printf ("\nO n�mero de diagonais do seu pol�gono convexo � %d.", nd);
	return 0;
}
