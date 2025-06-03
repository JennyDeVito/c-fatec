/*possivel solucao atividade 4.2 usando pow*/
#include <stdio.h>
#include <math.h>
#include <locale.h>
int main ()
{
	setlocale (LC_ALL, "portuguese");
	int num;
	printf ("\nDigite uma sequência terminada por zero: ");
	scanf ("%d", &num);
	while (num != 0) {
		printf ("%0.f\n", pow(num,2));
		scanf ("%d", &num);
	}
	return 0;
}
