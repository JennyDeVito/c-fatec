/*funcao que retorna o menor e o maior valor de um vetor*/
#include <stdio.h>
#include <locale.h>
#define max 6

void minimax (float v[max], float *a, float *b) {
	int c;
	*a = v[0];
	*b = v[0];
	for (c = 1; c < max; c++) {
		if (v[c] < *a) {
			*a = v[c];
		}
		if (v[c] > *b) {
			*b = v[c];
		}
	}
}

int main () {
	setlocale (LC_ALL, "portuguese");
	float v[max], x, y;
	int i;
	printf ("\nDigite seis números\n");
	for (i = 0; i < max; i++) {
		printf ("\nDigite o %dº número: ", i + 1);
		scanf ("%f", &v[i]);
	}
	minimax (v, &x, &y);
	printf ("%f %f", x, y);
	return 0;
}
