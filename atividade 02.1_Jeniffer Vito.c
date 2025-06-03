/* calculo do IMC */
#include <stdio.h>
int main ()
{
	float peso, altura, imc;
	printf ("\nDigite peso em kg e altura em m, separados por espa%co: ", 135);
	scanf ("%f %f", &peso, &altura);
	imc = peso / (altura * altura);
	printf("\nIMC= %.2f", imc);
	return 0;
}
