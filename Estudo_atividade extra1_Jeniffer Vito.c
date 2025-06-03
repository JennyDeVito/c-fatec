/*macros de reconhecimento e substituição de caracteres*/
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
		printf ("\nVocê digitou uma letra minúscula!");
		printf ("\nEste caractere maiúsculo é: %c", maiuscula(l));
	}
	else {
		if (eh_maiuscula(l)) {
			printf ("\nVocê digitou uma letra maiúscula!");
			printf ("\nEste caractere minúsculo é: %c", minuscula(l));
		}
	}
	printf ("\n%d", eh_minuscula(l));
	printf ("\n%d", eh_maiuscula(l));
	printf ("\n%c", minuscula(l));
	printf ("\n%c", maiuscula(l));
	return 0;
}
