/*estrutura para armazenar dados de um livro*/

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
	
	struct dados livro;
	
	printf("\nDigite o título do livro, em até 50 caracteres: ");
	fgets(livro.titulo, sizeof(livro.titulo), stdin);
	livro.titulo[strcspn(livro.titulo, "\n")] = '\0';

	printf("\nDigite o autor do livro, em até 30 caracteres: ");
	fgets(livro.autor, sizeof(livro.autor), stdin);
	livro.autor[strcspn(livro.autor, "\n")] = '\0';	
	
	printf("\nDigite a editora do livro, em até 20 caracteres: ");
	fgets(livro.editora, sizeof(livro.editora), stdin);
	livro.editora[strcspn(livro.editora, "\n")] = '\0';
	
	do {
		printf("\nDigite o ano de publicação do livro, com quatro dígitos: ");
		scanf("%d", &livro.ano);
		if(livro.ano < 1440 || livro.ano > 2025) { 
			printf("\nDigite um ano válido!");
		}
	} while(livro.ano < 1440 || livro.ano > 2025); 
	//nenhum livro foi publicado antes da prensa de gutemberg em 1440 e não dá pra cadastrar livros do futuro
		
	system("cls");
	
	printf("\n--------------------Dados do livro digitado--------------------");
	printf("\nTítulo: %s", livro.titulo);
	printf("\nAutor: %s", livro.autor);
	printf("\nEditora: %s", livro.editora);
	printf("\nAno de publicação: %d", livro.ano);

	return 0;
}
