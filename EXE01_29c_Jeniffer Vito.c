/*funcao recursiva que calcula o quociente de divisao inteira com subtracao*/

#include <stdio.h>
#include <locale.h>

int quociente (int dividendo, int divisor, int contador) {
	if(dividendo < divisor)
		return contador;
	else
		return quociente(dividendo - divisor, divisor, contador + 1);
}

int main() {
	setlocale (LC_ALL, "portuguese");
	
	int j, k, resultado;
	
	do {
		printf("\nDigite o dividendo: ");
		scanf("%d", &j);
		if(j < 0)
			printf("\nDigite um número positivo!");
	} while(j < 0);
	
	do {
		printf("\nDigite o divisor: ");
		scanf("%d", &k);
		if(k < 0)
			printf("\nDigite um número positivo!");
	} while(k < 0);
	
	if(k > j) {
		printf("\n%d não é divisível por %d.", j, k);
	}
	else {
		resultado = quociente(j, k, 0);
		printf("\nO quociente da divisão de %d por %d é %d.", j, k, resultado);
	}

	return 0;
}
