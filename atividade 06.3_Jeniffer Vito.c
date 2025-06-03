/*funcao que calcula o fatorial de um numero*/
#include <stdio.h>
#include <locale.h>

/*funcao fatorial*/
int fat (int n) {
	int in, fa = 1;
	in = n;
	if (n == 0) {
		return (1);
	}
	while (n > 0) { 
		fa *= n; 
		n--; 
	}
	return (fa);
}

/*programa principal*/
int main() 
{
	setlocale (LC_ALL, "portuguese");
	int x;		
	do { 
		printf ("\nDigite um número inteiro maior que zero: ");
		scanf ("%d", &x);
		if (x < 0) {
			printf ("\nVocê deve fatorar um número maior que zero!"); //a exclusao do negativo ficou na validacao de dados e nao na funcao
		}
	} while (x < 0); 
	fat(x);
	printf ("%d", fat(x));
	return 0;
}
