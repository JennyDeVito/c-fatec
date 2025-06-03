/*soma orimizada de sucessor e predecessor*/

#include <stdio.h>
#include <locale.h>

int pred(int i) {
	return i - 1;
}

int succ(int i) {
	return i + 1;
}

int SomaOtima(int m, int n) {
	int temp;
	
	if (m > n) {
		temp = m;
		m = n;
		n = temp;
	}
	
	if(m == 0)
		return n;
	else
		return SomaOtima(pred(m), succ(n));
}

int main() {
	setlocale(LC_ALL, "portuguese");
	int a, b, resultado;
	
	do {
		printf("\nDigite o primeiro número: ");
		scanf("%d", &a);
		if(a < 0)
			printf("\nDigite um número maior ou igual a zero!");
	} while(a < 0);
	
	do {
		printf("\nDigite o segundo número: ");
		scanf("%d", &b);
		if(b < 0)
			printf("\nDigite um número maior ou igual a zero!");
	} while(b < 0);
	
	resultado = SomaOtima(a, b);
	
	printf("\nA soma de %d com %d é igual a %d.", a, b, resultado);
	
	return 0;
}
