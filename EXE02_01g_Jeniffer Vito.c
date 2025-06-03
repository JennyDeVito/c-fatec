/*funcao recursiva que imprime um numero invertido*/

#include <stdio.h>
#include <locale.h>

void inv(int n){
    if (n == 0) return;
    printf ("%d", n % 10);
    return inv (n / 10);
}

int main () {
	setlocale (LC_ALL, "portuguese");
	
    int num;
    
    do {
    	printf ("\nDigite um número: ");
    	scanf ("%d", &num);
		if(num < 0)
			printf("\nDigite um número maior ou igual a zero!");
	} while (num < 0);
	
    if (num == 0)
    	printf ("\nSeu número, invertido: 0");
    else
    	printf ("\nSeu número, invertido: ");
    	inv(num);
    	
    return 0;
}
