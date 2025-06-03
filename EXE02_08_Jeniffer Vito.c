/*estrutura para imprime os dados de um livro*/

#include <stdio.h>
#include <locale.h>
#include <string.h>

typedef struct dados {
	char titulo[31];
	char autor[31];
	char editora[21];
	int ano;
};

int main() {
	setlocale(LC_ALL, "portuguese");
	
	struct dados livro;
	
	strcpy(livro.titulo, "Java, como programar");

	strcpy(livro.autor, "Deitel, H. M.; Deitel, P. J.");

	strcpy(livro.editora, "Prentice Hall");

	livro.ano = 2006;	
	
	printf("\nTítulo: %s", livro.titulo);
	printf("\nAutor: %s", livro.autor);
	printf("\nEditora: %s", livro.editora);
	printf("\nAno de publicação: %d", livro.ano);

	return 0;
}
