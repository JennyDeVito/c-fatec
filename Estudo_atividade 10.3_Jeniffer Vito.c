/*informa a ocorrencia de c na string ou -1 caso nao haja*/
#include <stdio.h>
#include <locale.h>
#include <string.h>

int strpos (char s[101], char c) {
	int p;
	for (p = 0; s[p] != '\0'; p++) {
		if (s[p] == 'c') {
			return p;
		}
	}
	return -1;
}

int main() {
	setlocale (LC_ALL, "portuguese");
	char fr[101];
	int pos;
	printf ("\nDigite uma frase de até 100 caracteres: ");
	fgets (fr, sizeof(fr), stdin);
	fr[strcspn (fr, "\n")] = '\0'; //da para reduzir a quantidade de linhas da substituicao de \n por \0 e sem criar uma variavel para isso
	printf ("\nFrase digitada: %s", fr); //confirma se a string foi lida corretamente
	pos = strpos (fr, 'c');
	printf ("\n%d", pos);
	return 0;
}
