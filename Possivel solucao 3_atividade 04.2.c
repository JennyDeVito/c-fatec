/*possivel solucao atividade 4.2 usando break*/
#include <stdio.h>
#include <math.h>
#include <locale.h>
int main ()
{
	setlocale (LC_ALL, "portuguese");
	int num;
	printf ("\nDigite uma sequência terminada por zero: ");
	while (1) { //cria um loop infinito
		scanf ("%d", &num);
		if (num == 0) //condicao que para o loop, pois quando isso for verdadeiro, executa o break
			break;
		printf ("%0.f\n", pow(num,2));
	}
	return 0;
}
