/*cadastra 10 livros e depois imprime o cadastro na tela*/

#include <stdio.h>
#include <locale.h>
#include <string.h>

typedef struct dados {
	char titulo[51];
	char autor[31];
	char editora[21];
	int ano;
};

int main() {
	setlocale(LC_ALL, "portuguese");
	
	struct dados livro[10];
	int i;

	printf ("\n|------------------------------------------------------|");
	printf ("\n|----------------CADASTRO DE LIVROS--------------------|");
	printf ("\n|------------------------------------------------------|\n");
	
	for (i = 0; i < 10; i++) {
		printf ("\n------------------------%dº livro------------------------", i + 1);
		
		printf("\nDigite o título do livro, com até 50 caracteres: ");
		fgets(livro[i].titulo, sizeof(livro[i].titulo), stdin);
		livro[i].titulo[strcspn(livro[i].titulo, "\n")] = '\0';
		
		printf("\nDigite o autor do livro, com até 30 caracteres: ");
		fgets(livro[i].autor, sizeof(livro[i].autor), stdin);
		livro[i].autor[strcspn(livro[i].autor, "\n")] = '\0';
		
		printf("\nDigite a editora do livro, com até 20 caracteres: ");
		fgets(livro[i].editora, sizeof(livro[i].editora), stdin);
		livro[i].editora[strcspn(livro[i].editora, "\n")] = '\0';
		
		do {
			printf("\nDigite o ano de publicação do livro, com quatro dígitos: ");
			scanf("%d", &livro[i].ano);
			getchar();
			if(livro[i].ano < 1440 || livro[i].ano > 2025) { 
				printf("\nDigite um ano válido!");
			}
		} while(livro[i].ano < 1440 || livro[i].ano > 2025);
	}
	
	system("cls");
	
	printf ("\n|------------------------------------------------------|");
	printf ("\n|----------------LIVROS CADASTRADOS--------------------|");
	printf ("\n|------------------------------------------------------|\n");

	for (i = 0; i < 10; i++) {
		printf("\nLivro nº%d:", i + 1);
		printf("\nTítulo: %s", livro[i].titulo);
		printf("\nAutor: %s", livro[i].autor);
		printf("\nEditora: %s", livro[i].editora);
		printf("\nAno de publicação: %d", livro[i].ano);
		printf ("\n--------------------------------------------------------\n");
	}

	return 0;
}
