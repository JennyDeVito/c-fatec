/*potencia sem usar pow com funcao recursiva*/
#include <stdio.h>
#include <locale.h>

double pot(double a, unsigned int b){
    if (b == 0) return 1;
    return a * pot(a, b-1);
}

int main (){
	setlocale (LC_ALL, "portuguese");
    double x;
    unsigned int y;
    printf ("\nDigite sua base: ");
    scanf ("%lf", &x);
    printf ("\nDigite seu expoente: ");
    scanf ("%u", &y);
    printf ("\n%.0lf elevado a %u é igual a %.0lf", x, y, pot(x, y));
    return 0;
}
