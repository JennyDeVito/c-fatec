/*funcao recursiva que calcula o resto de uma divisao inteira com subtracao*/

#include <stdio.h>
#include <locale.h>

int resto(int dividendo, int divisor) {
	if(dividendo == divisor)
		return 0; 
	if(dividendo > divisor)
		return resto(dividendo - divisor, divisor);
	else
		return dividendo;
}

int main() {
	setlocale (LC_ALL, "portuguese");
	
	int j, k, resultado;
	
	do {
		printf("\nDigite o dividendo: ");
		scanf("%d", &j);
		if(j < 0)
			printf("\nDigite um n�mero positivo!");
	} while(j < 0);
	
	do {
		printf("\nDigite o divisor: ");
		scanf("%d", &k);
		if(k < 0)
			printf("\nDigite um n�mero positivo!");
	} while(k < 0);
	
	if(k > j) {
		printf("\n%d n�o � divis�vel por %d.", j, k);
	}
	else {
		resultado = resto(j, k);
		printf("\nO resto da divis�o de %d por %d � %d.", j, k, resultado);
	}

	return 0;
}
