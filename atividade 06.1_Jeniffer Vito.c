/*devolve o valor m�ximo entre dois valores*/
#include <stdio.h>
#include <locale.h>

/*funcao max*/
double max(double a, double b) {
	if (a > b)
		return a;
	return b;
}

/*programa principal*/
int main() {
	setlocale (LC_ALL, "portuguese");
	double n1, n2, m;
	printf ("\nDigite o primeiro n�mero: ");
	scanf ("%lf", &n1);
	printf ("\nDigite o segundo n�mero: ");
	scanf ("%lf", &n2);
	m = max(n1, n2);
	system("cls");
	printf ("\nO valor m�ximo digitado entre %0.lf e %0.lf � %0.lf.", n1, n2, m);
	return 0;
}
