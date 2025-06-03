/*funcao que retorna o menor e o maior valor de um vetor com funcao de ponteiro para preencher o vetor*/
#include <stdio.h>
#include <locale.h>

void minimax (float v[], int n, float *a, float *b) {
	int c;
	*a = v[0];
	*b = v[0];
	for (c = 1; c < n; c++) {
		if (v[c] < *a) {
			*a = v[c];
		}
		if (v[c] > *b) {
			*b = v[c];
		}
	}
}

float carrega (float *v, int n) { //funcao solicitada
	int i;
	for (i = 0; i < n; i++) {
		printf ("\nDigite o %dº número: ", i + 1);
		scanf ("%f", v + i);
	}
	return *v;
}

int main () {
	setlocale (LC_ALL, "portuguese");
	
	int i, n;
	
	do {
		printf ("\nDigite quantos números quer comparar: ");
		scanf ("%d", &n);
		if (n <= 2)
			printf ("Digite três, no mínimo!");
	} while (n <= 2);
	
	float v[n], x, y;
	
	v[n] = carrega (v, n); //chamada da funcao solicitada
	
	minimax (v, n, &x, &y);
	printf ("%f %f", x, y);
	
	return 0;
}
