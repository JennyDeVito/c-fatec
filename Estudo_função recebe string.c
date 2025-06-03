/*estudo de função que recebe string como parâmetro*/
#include <stdio.h>
#include <locale.h>
#include <string.h>
#define max 101

void imprime_msg (char msg[max]) {
	printf("\nA mensagem digitada foi: %s", msg);
}

int main () {
	setlocale (LC_ALL, "portuguese");
	char fr[max];
	printf ("\nDigite uma mensagem de até 100 caracteres: ");
	fgets (fr, sizeof(fr), stdin);
	fr[strcspn (fr, "\n")] = '\0';
	imprime_msg (fr);
	return 0;
}
