/*somatoria de n termos*/

#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	
	double n, resultado = 0, i, inicial;
	
	do {
		printf("\nDigite um número inteiro maior do que zero: ");
		scanf("%lf", &n);
		if(n <= 0) {
			printf("\nUm número maior do que zero!");
		}
	} while(n <= 0);
	
	inicial = n; 
	
	for(i = 0; i <= inicial; i++) {
		resultado += n;
		n -= 1;
	}
	
	printf("\nA somatória de termos do número %.0lf é %.0lf.", inicial, resultado);
	
	return 0;
}
