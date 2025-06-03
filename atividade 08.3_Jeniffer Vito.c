#include <stdio.h>
#include <locale.h>

void inv(int n){
    if (n == 0) return;
    printf ("%d", n % 10);
    return inv (n / 10);
}

int main (){
	setlocale (LC_ALL, "portuguese");
    double num;
    printf ("\nDigite um número: ");
    scanf ("%lf", &num);
    if (num == 0)
    	printf ("\nSeu número, invertido: 0");
    else
    	printf ("\nSeu número, invertido: ");
    	inv(num);
    return 0;
}
