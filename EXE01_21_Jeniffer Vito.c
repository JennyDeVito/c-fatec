/*calcula o fatorial*/
#include <stdio.h>
#include <locale.h>
int main() {
	setlocale (LC_ALL, "portuguese");
	int n, c = 0, fat = 1, in;
	do {
		printf ("\nDigite um n�mero natural: ");
		scanf ("%d", &n);
		if (n < 0) {
			printf ("\nVoc� deve digitar um n�mero maior ou igual a zero!");
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
