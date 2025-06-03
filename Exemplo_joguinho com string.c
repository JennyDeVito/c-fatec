/*joguinho com string*/
#include <stdio.h>
#include <locale.h>
#include <string.h>
int main () {
	setlocale (LC_ALL, "portuguese");
	char resposta[] = "BRANCA\n";
	char resp[40];
	puts ("Qual a cor do cavalo branco de Napoleão?");
	fgets (resp, 40, stdin);
	while (strcmp(resp, resposta) != 0) {
		printf ("\nErro! Tente de novo!\n");
		fgets (resp, 40, stdin);
	}
	printf ("\nCorreto!\n");
	return 0;
}
