/*conta as palavras de uma string*/
#include <stdio.h>
#include <locale.h>
#include <string.h>
int main() {
	setlocale (LC_ALL, "portuguese");
	int c = 0, pl = 0, pos;
	char fr[101];
	printf ("\nDigite uma frase de até 100 caracteres: ");
	fgets (fr, 101, stdin);
	pos = strcspn (fr, "\n");
	fr[pos] = '\0';
	for (c = 0; c <= strlen(fr); c++) {
		if (fr[c] == ' ') { 
			pl += 1;
		}
	}
	printf ("\nA frase digitada tem %d palavras.", pl + 1);
	return 0;
}
