/*solicita 5 numeros e exibe na ordem inversa*/
#include <stdio.h>
#include <locale.h>
int main () {
	setlocale (LC_ALL, "portuguese");
	int l[5], c = 0;
	for (c = 0; c < 5; c++) {
		printf ("\nDigite o %d n�mero: ", c+1);
		scanf ("%d", &l[c]);
	}
	for (c = 4; c >= 0; c--) {
		printf ("\nO %d� n�mero do vetor �: %d.", c+1, l[c]);
	}
	return 0;
}
