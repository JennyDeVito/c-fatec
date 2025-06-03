/*solicita 5 numeros e exibe na ordem inversa*/
#include <stdio.h>
#include <locale.h>
int main () {
	setlocale (LC_ALL, "portuguese");
	int l[5], c = 0;
	for (c = 0; c < 5; c++) {
		printf ("\nDigite o %d número: ", c+1);
		scanf ("%d", &l[c]);
	}
	for (c = 4; c >= 0; c--) {
		printf ("\nO %dº número do vetor é: %d.", c+1, l[c]);
	}
	return 0;
}
