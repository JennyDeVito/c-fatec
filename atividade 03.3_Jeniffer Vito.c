/*le a quantidade de faltas e a media e informa o conceito final de um aluno*/
#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale (LC_ALL, "portuguese");
	float m;
	int f;
	printf ("\nDigite as faltas e a m�dia, respectivamente e separados por espa�o: "); //nao esquecer que multiplas entradas em C sao separadas por espaco
	scanf ("%d %f", &f, &m);
	if (f > 5) {
		printf ("\nSeu conceito final � F");
	}
	else
		if (f <= 5 && m < 6.0) {
			printf ("\nSeu conceito final � C");
		}
		else
			if (f <= 5 && m >= 6.0 && m < 7.5) {
				printf ("\nSeu conceito final � B");
			}
			else
				if (f <= 5 && m >= 7.5 && m < 9.0) {
					printf ("\nSeu conceito final � A");
				}
				else
					if (f <= 5 && m > 9.0)
						printf ("\nSeu conceito final � E");
	return 0;
}
