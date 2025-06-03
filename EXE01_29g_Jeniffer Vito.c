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
    	printf ("\nDigite um n�mero: ");
    	scanf ("%d", &num);
		if(num < 0)
			printf("\nDigite um n�mero maior ou igual a zero!");
	} while (num < 0);
	
    if (num == 0)
    	printf ("\nSeu n�mero, invertido: 0");
    else
    	printf ("\nSeu n�mero, invertido: ");
    	inv(num);
    	
    return 0;
}
