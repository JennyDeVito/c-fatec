/*macros de reconhecimento e substitui��o de caracteres*/
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
		printf ("\nVoc� digitou uma letra min�scula!");
		printf ("\nEste caractere mai�sculo �: %c", maiuscula(l));
	}
	else {
		if (eh_maiuscula(l)) {
			printf ("\nVoc� digitou uma letra mai�scula!");
			printf ("\nEste caractere min�sculo �: %c", minuscula(l));
		}
	}
	return 0;
}
