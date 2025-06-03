/*teste input de string*/
#include <stdio.h>
#include <locale.h>
#include <string.h>
int main () {
	setlocale (LC_ALL, "portuguese");
	int pos;
	char nome[21];
	printf ("\nDigite nome e sobrenome: ");
	fgets (nome, 21, stdin); //nao usar scanf porque ele nao le o que vem depois do espaco
	//printf ("%s", nome); //teste do input
	pos = strcspn (nome, "\n");
	nome[pos] = '\0';
	printf ("\nOlá, %s!\n", nome);
	//system ("pause"); //coloca mais um enter no final do programa
	return 0;
}
