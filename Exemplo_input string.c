/*teste input de string*/
#include <stdio.h>
#include <locale.h>
int main () {
	setlocale (LC_ALL, "portuguese");
	char nome[21];
	printf ("\nDigite nome e sobrenome: ");
	scanf ("%s", &nome); //nao usar scanf porque ele nao le o que vem depois do espaco
	printf ("\nOlá, %s!\n", nome);
	system ("pause");
	return 0;
}
