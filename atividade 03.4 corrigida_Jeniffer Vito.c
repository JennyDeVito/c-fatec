/*formula de obtencao das raizes de uma eq quadratica com validacao para o delta*/
#include <stdio.h>
#include <locale.h>
#include <math.h>
int main()
{
	setlocale (LC_ALL, "portuguese");
	float a, b, c, d, x1, x2;
	printf("\nDigite os coeficientes da equação de 2º grau, a, b e c, respectivamente e separados por espaço: "); //nao esquecer que em C entradas multiplas sao separadas por espacos
	scanf ("%f %f %f", &a, &b, & c);
	if (a == 0) {
		printf ("\nO coeficiente a não pode ser zero!");
	}
	else {
		d = (pow(b,2))-(4 * a * c);
		if (d < 0) {
			printf ("\nNão existem raízes reais!");
		}
		else {
			x1 = (-b + sqrt(d)) / (2 * a);
			x2 = (-b - sqrt(d)) / (2 * a);
			printf ("\nAs raízes da sua equação são: %.2f e %.2f", x1, x2);	
		}
	}
	return 0;
}
