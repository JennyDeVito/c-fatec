/*le uma string e imprime ao contrario*/
#include <stdio.h>
#include <locale.h>
#include <string.h>
int main() {
	setlocale (LC_ALL, "portuguese");
	char fr[101];
	int c = 0, uc;
	printf ("\nDigite uma frase de até 100 caracteres: ");
	fgets (fr, sizeof(fr), stdin);
	uc = strcspn (fr, "\n");
	fr[uc] = '\0';
	printf ("\nAo contrário: ");
	for (c = (strlen(fr) - 1); c >= 0; c--) { //comeca a imprimir da posicao -1 pq as posicoes da string comecam em 9
		printf ("%c", fr[c]);
	}
	return 0;
}
