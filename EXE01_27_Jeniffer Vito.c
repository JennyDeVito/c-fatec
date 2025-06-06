/*soma de sucessor e predecessor*/

#include <stdio.h>
#include <locale.h>

int pred(int i) {
	return i - 1;
}

int succ(int i) {
	return i + 1;
}

int soma(int m, int n) {
	if(m == 0)
		return n;
	else
		return soma(pred(m), succ(n));
}

int main() {
	setlocale(LC_ALL, "portuguese");
	int a, b, resultado;
	
	do {
		printf("\nDigite o primeiro n�mero: ");
		scanf("%d", &a);
		if(a < 0)
			printf("\nDigite um n�mero maior ou igual a zero!");
	} while(a < 0);
	
	do {
		printf("\nDigite o segundo n�mero: ");
		scanf("%d", &b);
		if(b < 0)
			printf("\nDigite um n�mero maior ou igual a zero!");
	} while(b < 0);
	
	resultado = soma(a, b);
	
	printf("\nA soma de %d com %d � igual a %d.", a, b, resultado);
	
	return 0;
}
