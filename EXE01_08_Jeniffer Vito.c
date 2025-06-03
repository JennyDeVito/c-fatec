/*operador ternário para exibir a quantidade de erros de um processo*/
#include <stdio.h>
#include <locale.h>
int main() {
	setlocale (LC_ALL, "portuguese");
	int e;
	do {
		printf ("\nDigite 1 ou 5: ");
		scanf ("%d", &e);
		if (e != 1 && e != 5)
			printf ("\nVocê deve digitar 1 ou 5! \n");
	} while (e != 1 && e != 5);
	printf("%d %s detectado%s\n", e, (e == 1) ? "erro" : "erros", (e == 1) ? "" : "s");
	return 0;
}
