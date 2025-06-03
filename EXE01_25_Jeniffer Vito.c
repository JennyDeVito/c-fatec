/*funcao recursiva para determinar se um numero eh par ou nao*/

#include <stdio.h>
#include <locale.h>

void par(int n) {
	if(n == 0) //solucao trivial 1 
		printf("\n� par!");
	else 
		if(n == 1) //solucao trivial 2
			printf("\nN�o � par!");
		else
			par(n - 2);	
}

int main() {
	setlocale (LC_ALL, "portuguese");
	
	int g;
	
	do {
		printf("\nDigite um n�mero natural: "); 
		scanf("%d", &g);
		if(g < 0)
			printf("\nDigite um n�mero maior ou igual a zero!");
	} while (g < 0);
	
	par(g);
	
	return 0;
}
