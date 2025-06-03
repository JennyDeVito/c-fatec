/*possivel solucao atividade 4.2 usando break*/
#include <stdio.h>
#include <math.h>
#include <locale.h>
int main ()
{
	setlocale (LC_ALL, "portuguese");
	int num;
	printf ("\nDigite uma sequência terminada por zero: ");
	do {
		scanf ("%d", &num);
		if (num == 0)
			break;
		printf ("%0.f\n", pow(num,2));
	} while (num != 0);
	return 0;
}
