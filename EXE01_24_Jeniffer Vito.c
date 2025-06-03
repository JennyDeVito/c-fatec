/*somatoria de n termos com funcao recursiva*/

#include <stdio.h>
#include <locale.h>

double somatoria (double v) {
	if (v == 0)
		return 0;
	return v + somatoria(v - 1);
}

int main () {
	setlocale (LC_ALL, "portuguese");
	
	double q, resultado;
	
	do {
		printf("\nDigite um n�mero para sua somat�ria: ");
		scanf("%lf", &q);
		if (q < 0)
			printf("\nDigite um n�mero maior ou igual a zero!");
	} while (q < 0);
	
	resultado = somatoria(q);
	
	printf("\nA somat�ria para o n�mero digitado � %0.lf.", resultado);
	
	return 0;
}

