/*agenda usando estrutura de dados com vetores*/
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
	
	PESSOA agenda[5] = {
		{"Itivaldo Buzo", "+55 11 998 509 973", {27, 7, 1970} },
		{"Roberto Soares", "+55 11 998 509 973", {15, 11, 1971} },
		{"Marcia Ueji", "+55 11 995 768 292", {9, 5, 1966} },
		{"Silvio Lago", "+55 11 998 517 715", {18, 3, 1968} },
		{"Mie Kobayashi", "+55 11 998 340 192", {4, 12, 1973} }	};
	
	int i;
	for (i = 0; i < 5; i++) {
		printf ("\nNome: %s", agenda[i].nome);
		printf ("\nTelefone: %s", agenda[i].fone);
		printf ("\nData de nascimento: %d/ %d/ %d\n", agenda[i].nasc.dia, agenda[i].nasc.mes, agenda[i].nasc.ano);
	}
	return 0;

	/* strcpy (agenda[0].nome, "Itivaldo Buzo");
	strcpy (agenda[0].fone, "+55 11 998 509 973");
	agenda[0].nasc.dia = 27;
	agenda[0].nasc.mes = 07;
	agenda[0].nasc.ano = 1970;
	
	strcpy (agenda[1].nome, "Roberto Soares");
	strcpy (agenda[1].fone, "+ 55 11 992 660 879");
	agenda[1].nasc.dia = 15;
	agenda[1].nasc.mes = 11;
	agenda[1].nasc.ano = 1971;
	
	strcpy (agenda[2].nome, "Marcia Ueji");
	strcpy (agenda[2].fone, "+55 11 995 768 292");
	agenda[2].nasc.dia = 9;
	agenda[2].nasc.mes = 05;
	agenda[2].nasc.ano = 1966;
	
	strcpy (agenda[3].nome, "Silvio Lago");
	strcpy (agenda[3].fone, "+55 11 998 517 715");
	agenda[3].nasc.dia = 18;
	agenda[3].nasc.mes = 03;
	agenda[3].nasc.ano = 1968;
	
	strcpy (agenda[4].nome, "Mie Kobayashi");
	strcpy (agenda[4].fone, "+55 11 998 340 192");
	agenda[4].nasc.dia = 04;
	agenda[4].nasc.mes = 12;
	agenda[4].nasc.ano = 1973;*/
}
