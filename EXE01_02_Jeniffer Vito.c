/*calcula o numero de diagonais de um poligono*/
#include <stdio.h>
#include <locale.h>
int main () {
	setlocale (LC_ALL, "portuguese");
	int nl, nd;
	do {
		printf ("\nDigite o número de lados do seu polígono: ");
		scanf ("%d", &nl); 
		if (nl < 3) {
			printf ("\nSeu polígono deve ter pelo menos três lados!");
		}
	} while (nl <= 3);
	nd = (nl*(nl-3))/2;
	printf ("\nO número de diagonais do seu polígono convexo é %d.", nd);
	return 0;
}
