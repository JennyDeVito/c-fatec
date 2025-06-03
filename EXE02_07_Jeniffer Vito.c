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
	
	printf("\nDigite o t�tulo do livro, em at� 50 caracteres: ");
	fgets(livro.titulo, sizeof(livro.titulo), stdin);
	livro.titulo[strcspn(livro.titulo, "\n")] = '\0';

	printf("\nDigite o autor do livro, em at� 30 caracteres: ");
	fgets(livro.autor, sizeof(livro.autor), stdin);
	livro.autor[strcspn(livro.autor, "\n")] = '\0';	
	
	printf("\nDigite a editora do livro, em at� 20 caracteres: ");
	fgets(livro.editora, sizeof(livro.editora), stdin);
	livro.editora[strcspn(livro.editora, "\n")] = '\0';
	
	do {
		printf("\nDigite o ano de publica��o do livro, com quatro d�gitos: ");
		scanf("%d", &livro.ano);
		if(livro.ano < 1440 || livro.ano > 2025) { 
			printf("\nDigite um ano v�lido!");
		}
	} while(livro.ano < 1440 || livro.ano > 2025); 
	//nenhum livro foi publicado antes da prensa de gutemberg em 1440 e n�o d� pra cadastrar livros do futuro
		
	system("cls");
	
	printf("\n--------------------Dados do livro digitado--------------------");
	printf("\nT�tulo: %s", livro.titulo);
	printf("\nAutor: %s", livro.autor);
	printf("\nEditora: %s", livro.editora);
	printf("\nAno de publica��o: %d", livro.ano);

	return 0;
}
