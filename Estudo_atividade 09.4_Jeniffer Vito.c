/*calcula as notas, a media de cada aluno e compara com a media da sala usando arrays*/
#include <stdio.h>
#include <locale.h>

int main() {
	setlocale (LC_ALL, "portuguese");
	float notas[10][3], soma = 0, medt;
	int c, l;
	for (l = 0; l < 10; l++) {
		for (c = 0; c < 2; c++) {
			do {
				printf ("\nDigite a %d� nota do %d� aluno: ", c + 1, l + 1);
				scanf ("%f", &notas[l][c]);
				if (notas[l][c] < 0 || notas[l][c] > 10)
					printf ("\nDigite uma nota v�lida!");
			} while (notas[l][c] < 0 || notas[l][c] > 10);
			notas[l][2] = (notas[l][0] + notas[l][1]) / 2;
		}
		soma += notas [l][2];
	}
	medt = soma / 10;
	printf ("\nA m�dia da turma foi %.2f.\n", medt);
	for (l = 0; l < 10; l++) {
		//printf ("\nAluno %d Nota 1: %.2f, Nota 2: %.2f e M�dia: %.2f.", l + 1, notas[l][0], notas[l][1], notas[l][2]); //imprime tambem as notas digitadas
		printf ("\nAluno %d - M�dia: %.2f.", l + 1, notas[l][2]); //imprime somente o que foi solicitado no enunciado
		if (notas[l][2] == medt)
			printf ("\nO aluno est� na m�dia da turma.\n");
		else 
			if (notas[l][2] > medt)
				printf ("\nO aluno est� acima da m�dia da turma.\n");
			else
				printf ("\nO aluno est� abaixo da m�dia da turma.\n");
	}
	return 0;
}
