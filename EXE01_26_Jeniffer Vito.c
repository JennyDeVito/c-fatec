/*calcula os termos de uma serie harmonica*/

#include <stdio.h>
#include <locale.h>

double harmonica(int n) {
	if(n == 1)
		return 1.0;
	else
		return (1.0 / n) + harmonica(n - 1);
}

int main() {
	setlocale(LC_ALL, "portuguese");
	
	int x;
	double resultado;
	
	do {
		printf("\nDigite o termo máximo para sua série harmônica: ");
		scanf("%d", &x);
		if(x < 1)
			printf("\nDigite um número maior que zero!");
	} while (x < 1);
	
	resultado = harmonica(x);
	
	printf("\nO resultado de sua soma harmônica é %.2lf", resultado); 
	
	return 0;
}
