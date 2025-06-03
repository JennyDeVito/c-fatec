/*armazena e imprime dados e média de uma turma*/
#include <stdio.h>
#include <locale.h>
#include <string.h>

typedef struct {
	char nome[21];
	char matr[9];
	float mf;
}ALUNO;

void LeAluno (ALUNO t[], int n) {
	int c;
		
	for (c = 0; c < n; c++) {
		printf ("\nDigite o nome do %dº aluno: ", c + 1);
		fgets (t[c].nome, sizeof(t[c].nome), stdin);
		t[c].nome[strcspn(t[c].nome, "\n")] = '\0';
		
		printf ("\nDigite a matrícula do %dº aluno: ", c + 1);
		fgets (t[c].matr, sizeof(t[c].matr), stdin);
		t[c].matr[strcspn(t[c].matr, "\n")] = '\0';
		
		do {
			printf ("\nDigite a média final do %dº aluno: ", c + 1);
			scanf ("%f", &t[c].mf);
			getchar();
			if (t[c].mf <= -1 || t[c].mf >= 10.1)
				printf ("\nDigite uma média válida!");
		} while (t[c].mf <= -1 || t[c].mf >= 10.1);
	}
}

void Imprime (ALUNO t[], int n) {
	int c;
	
	for (c = 0; c < n; c++) {
		printf ("\n********************ALUNO %00d********************", c + 1);
		printf ("\nNome: %s", t[c].nome);
		printf ("\nMatrícula: %s", t[c].matr);
		printf ("\nMédia final: %.1f", t[c].mf);
		printf ("\n-----------------------------------------------\n");
	}
}

int main () {
	setlocale (LC_ALL, "portuguese");
	
	int x;
	
	do {
		printf ("\nDigite quantos alunos quer cadastrar: ");
		scanf ("%d", &x);
		getchar(); // limpa o buffer 
		if (x <= 0)
			printf ("\nDigite pelo menos 1!");
	} while (x <= 0);
	
	ALUNO t[x];
	
	LeAluno (t, x);
	
	system ("cls");
	
	Imprime (t, x);
	
	return 0;
}
