/*calcula o fatorial*/
#include <stdio.h>
#include <locale.h>
int main() {
	setlocale (LC_ALL, "portuguese");
	int n, c = 0, fat = 1, in;
	do {
		printf ("\nDigite um número natural: ");
		scanf ("%d", &n);
		if (n < 0) {
			printf ("\nVocê deve digitar um número maior ou igual a zero!");
		}
	} while (n < 0);
	in = n;
	if (n == 0) {
		fat = 1;
	}
	for (c = 0; c = n; c++) {
		fat = fat * n;
		n--;
	}
	printf ("\n%d! = %d", in, fat);
	return 0;
}
