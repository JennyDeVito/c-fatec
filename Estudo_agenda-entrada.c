/*agenda usando estrutura de dados com vetores e entrada de dados do usuário*/
#include <stdio.h>
#include <locale.h>
#include <string.h>

typedef struct {
	int dia;
	int mes;
	int ano;
}DATA;
typedef struct {
	char nome[51];
	char fone[21];
	DATA nasc;
}PESSOA;

int main() {
	setlocale (LC_ALL, "portuguese");
	
	int n, i;
	
	printf ("\n|------------------------------------------------------|");
	printf ("\n|----------------CADASTRO NA AGENDA--------------------|");
	printf ("\n|------------------------------------------------------|\n");
	
	do {
		printf ("\nDigite quantas pessoas quer cadastrar na agenda: ");
		scanf ("%d", &n);
		getchar(); // limpa o buffer 
		if (n <= 0)
			printf ("\nDigite pelo menos 1!");
	} while (n <= 0);
	
	PESSOA agenda[n];
	
	for (i = 0; i < n; i++) {
		
		printf ("\n|----------------------%dª PESSOA----------------------|", i + 1);
		
		printf ("\nDigite o nome: ");
		fgets (agenda[i].nome, sizeof(agenda[i].nome), stdin);
		agenda[i].nome[strcspn(agenda[i].nome, "\0")] = '\0';
		
		printf ("\nDigite o telefone: ");
		fgets (agenda[i].fone, sizeof(agenda[i].fone), stdin);
		agenda[i].fone[strcspn(agenda[i].fone, "\0")] = '\0';
		
		printf ("\nDATA DE NASCIMENTO ");
		do {
			printf ("\nDia: ");
			scanf ("%d", &agenda[i].nasc.dia);
			getchar(); // limpa o buffer 
			if (agenda[i].nasc.dia <= 0 || agenda[i].nasc.dia >= 32)
				printf ("\nDigite uma data válida!");
		} while (agenda[i].nasc.dia <= 0 || agenda[i].nasc.dia >= 32);
		
		do {
			printf ("\nMês: ");
			scanf ("%d", &agenda[i].nasc.mes);
			getchar(); // limpa o buffer 
			if (agenda[i].nasc.mes <= 0 || agenda[i].nasc.mes >= 13)
				printf ("\nDigite uma data válida!");
		} while (agenda[i].nasc.mes <= 0 || agenda[i].nasc.mes >= 13);
		
		do {
			printf ("\nAno: ");
			scanf ("%d", &agenda[i].nasc.ano);
			getchar(); // limpa o buffer 
			if (agenda[i].nasc.ano <= 1900 || agenda[i].nasc.ano >= 2026)
				printf ("\nDigite uma data válida!");
		} while (agenda[i].nasc.ano <= 1900 || agenda[i].nasc.ano >= 2026);
		
	}
	
	system ("cls");

	printf ("\n|------------------------------------------------------|");
	printf ("\n|------------------NOMES CADASTRADOS-------------------|");
	printf ("\n|------------------------------------------------------|\n");

	for (i = 0; i < n; i++) {		
		printf ("\nNome: %s", agenda[i].nome);
		printf ("\nTelefone: %s", agenda[i].fone);
		printf ("\nData de nascimento: %d/ %d/ %d\n", agenda[i].nasc.dia, agenda[i].nasc.mes, agenda[i].nasc.ano);
		printf ("\n|------------------------------------------------------|");

	}
	return 0;
}
