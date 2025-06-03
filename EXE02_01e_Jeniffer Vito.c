/*contagem regressiva a partir de n*/

#include <stdio.h>
#include <locale.h>

void regressiva(int n) {
	if(n == 0) {
		printf("0\n");
		return;
	}
	
	printf("%d\n", n);
	regressiva(n - 1);
}

int main() {
	setlocale (LC_ALL, "portuguese");
	
	int a;
	
	do {
		printf("\nDigite um número para a contagem regressiva: ");
		scanf("%d", &a);
		if(a < 1)
			printf("\nDigite 1, pelo menos!");
	} while(a < 1);
	
	printf("\nContagem regressiva:\n");
	regressiva(a);
	
	return 0;
}
