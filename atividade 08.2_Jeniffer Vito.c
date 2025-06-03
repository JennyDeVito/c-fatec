/*produto de dois numeros usando soma e funcao recursiva*/
#include <stdio.h>
#include <locale.h>

double prod(double a, double b){
    if (b == 0) return 0;
    return a + prod(a, b - 1);
}

int main (){
	setlocale (LC_ALL, "portuguese");
    double x, y;
    printf ("\nDigite o primeiro número: ");
    scanf ("%lf", &x);
    printf ("\nDigite o segundo número: ");
    scanf ("%lf", &y);
    printf("\n%.0lf multiplicado por %.0lf é igual a %.0lf.", x, y, prod(x, y));
    return 0;
}
