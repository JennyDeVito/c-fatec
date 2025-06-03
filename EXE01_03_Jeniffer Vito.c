/*reajuste salarial*/
#include <stdio.h>
#include <locale.h>
int main() {
	setlocale (LC_ALL, "portuguese");
	double sal, aum, ab = 100;
	do {
		printf ("\nDigite o valor do sal�rio: ");
		scanf ("%lf", &sal);
		if (sal <= 0) {
			printf ("\nO sal�rio deve ser um valor positivo e maior que zero!\n");
		}
	} while (sal <= 0);
	if (sal <= 750.00) {
		aum = sal + sal * 0.05 + ab;
	}
	else {
		aum = sal + sal * 0.05;
	}
	printf ("\nO sal�rio de R$ %.2lf ser� reajustado para R$ %.2lf.", sal, aum);
	return 0;
}
