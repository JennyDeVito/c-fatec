/*funcao que ordena dois valores usando ponteiros*/
#include <stdio.h>
#include <locale.h>

void ordena (int *a, int *b) {
	int c;
	if (*b < *a) {
		c = *a;
		*a = *b;
		*b = c;
	}
}

int main () {
	setlocale (LC_ALL, "portuguese");
	int x, y, z; //retirar a variavel z antes de entregar
	printf ("\nDigite o valor de x: ");
	scanf ("%d", &x);
	printf ("\nDigite o valor de y: ");
	scanf ("%d", &y);
	ordena (&x,&y);
	/* if (y < x) { // inicio do teste da logica
		z = x;
		x = y;
		y = z;
	} //fim do  teste da logica */
	printf ("\nO menor valor digitado foi %d e o maior foi %d.", x, y);
	return 0;
}
