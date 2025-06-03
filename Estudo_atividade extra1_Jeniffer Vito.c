/*macros de reconhecimento e substitui��o de caracteres*/
#include <stdio.h>
#include <locale.h>
#define eh_minuscula(c) ((c) >= 'a' && (c) <= 'z')
#define eh_maiuscula(c) ((c) >= 'A' && (c) <= 'Z')
#define minuscula(c) (((c) >= 'A' && (c) <= 'Z')?(c+32):(c))
#define maiuscula(c) (((c) >= 'a' && (c) <= 'z')?(c-32):(c))
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
	printf ("\n%d", eh_minuscula(l));
	printf ("\n%d", eh_maiuscula(l));
	printf ("\n%c", minuscula(l));
	printf ("\n%c", maiuscula(l));
	return 0;
}
