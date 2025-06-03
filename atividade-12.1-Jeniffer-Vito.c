/*solicita e imprime os dados do melhor amigo usando estrutura de dados*/
#include <stdio.h>
#include <locale.h>
#include <string.h>

typedef struct {
	int dia;
	int mes;
	int ano;
} DATA;
typedef struct {
	char nome[51];
	char fone[21];
	DATA nasc;
} PESSOA;

int main() {
	setlocale (LC_ALL, "portuguese");
	PESSOA melhorAmigo;
	
	printf ("\nDigite o nome do seu melhor amigo: ");
	fgets(melhorAmigo.nome, sizeof(melhorAmigo.nome), stdin);
	melhorAmigo.nome[strcspn(melhorAmigo.nome,"\n")] = '\0';
		
	printf ("\nDigite o telefone: ");
	fgets (melhorAmigo.fone, sizeof(melhorAmigo.fone), stdin);
	melhorAmigo.fone[strcspn(melhorAmigo.fone,"\n")] = '\0';
	
	printf ("\nDigite a data de nascimento separada por espaço [dia mês ano {AAAA}]: ");
	scanf ("%d %d %d", &melhorAmigo.nasc.dia, &melhorAmigo.nasc.mes, &melhorAmigo.nasc.ano);
	getchar();
	
	system("cls");
	
	printf ("\n^_^ SEU MELHOR AMIGO ^_^\n");
	printf ("\nNome: %s", melhorAmigo.nome);
	printf ("\nFone: %s", melhorAmigo.fone);
	printf ("\nData de Nascimento: %d/ %d/ %d", melhorAmigo.nasc.dia, melhorAmigo.nasc.mes, melhorAmigo.nasc.ano);
	
	return 0;
}
