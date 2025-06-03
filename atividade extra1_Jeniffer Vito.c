/*macros de reconhecimento e substituição de caracteres*/
#include <stdio.h>
#include <locale.h>
#include "sublet.h"
int main()
{
	setlocale (LC_ALL, "portuguese");
	char l;
	printf ("\nDigite uma letra: ");
	scanf ("%c", &l);
	if (eh_minuscula(l)) {
		printf ("\nVocê digitou uma letra minúscula!");
		printf ("\nEste caractere maiúsculo é: %c", maiuscula(l));
	}
	else {
		if (eh_maiuscula(l)) {
			printf ("\nVocê digitou uma letra maiúscula!");
			printf ("\nEste caractere minúsculo é: %c", minuscula(l));
		}
	}
	return 0;
}
