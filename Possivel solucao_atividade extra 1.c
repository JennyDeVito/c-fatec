/*possivel solucao da atividade extra 1*/
#include <stdio.h>
#define eh_maiuscula(c) ((c) >= 'A' && (c) <= 'Z'? 1: 0)
#define eh_minuscula(c) ((c) >= 'a' && (c) <= 'z'? 1: 0)
#define maiuscula(c) (eh_minuscula(c)? ((c) + ('A' - 'a')) : (c))
#define minuscula(c) (eh_minuscula(c)? ((c) - ('A' - 'a')) : (c))

int main()
{
	char l;
	printf ("\nDigite uma letra: ");
	scanf ("%c", &l);
	printf ("\nConverte para maiuscula: %c", maiuscula(l));
	printf ("\nConverte para minuscula: %c", minuscula(l));
	return 0;
}
