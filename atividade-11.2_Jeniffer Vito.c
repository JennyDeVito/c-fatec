/*funcao que retorna o menor e o maior valor de um vetor*/
#include <stdio.h>
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
	float v[] = {0, -3, -10.5, 15.5, 20, 37};
	float x, y;
	minimax (v, &x, &y);
	printf ("%f %f", x, y);
	return 0;
}
