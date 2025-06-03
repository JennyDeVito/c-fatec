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
				printf ("\nDigite a %dª nota do %dº aluno: ", c + 1, l + 1);
				scanf ("%f", &notas[l][c]);
				if (notas[l][c] < 0 || notas[l][c] > 10)
					printf ("\nDigite uma nota válida!");
			} while (notas[l][c] < 0 || notas[l][c] > 10);
			notas[l][2] = (notas[l][0] + notas[l][1]) / 2;
		}
		soma += notas [l][2];
	}
	medt = soma / 10;
	printf ("\nA média da turma foi %.2f.\n", medt);
	for (l = 0; l < 10; l++) {
		//printf ("\nAluno %d Nota 1: %.2f, Nota 2: %.2f e Média: %.2f.", l + 1, notas[l][0], notas[l][1], notas[l][2]); //imprime tambem as notas digitadas
		printf ("\nAluno %d - Média: %.2f.", l + 1, notas[l][2]); //imprime somente o que foi solicitado no enunciado
		if (notas[l][2] == medt)
			printf ("\nO aluno está na média da turma.\n");
		else 
			if (notas[l][2] > medt)
				printf ("\nO aluno está acima da média da turma.\n");
			else
				printf ("\nO aluno está abaixo da média da turma.\n");
	}
	return 0;
}
