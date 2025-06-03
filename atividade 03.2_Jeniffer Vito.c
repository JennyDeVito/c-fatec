/*rodizio*/
#include <stdio.h>
#include <locale.h> //biblioteca que inclui caracteres acentuados para alem dos caracteres ASCII
int main() 
{
	setlocale (LC_ALL, "portuguese"); //configuracao da bibioteca para caracteres em pt
	char fp; //usar char nessa entrada - se usar int nessa variavel ele vai dar erro com a entrada de caracteres que nao sejam numeros
	printf ("\nDigite o final da sua placa: ");
	scanf ("%c", &fp);
	switch (fp) {
		case '1':
			printf ("\nSeu rodízio é na segunda-feira!");
			break;
		case '2':
			printf ("\nSeu rodízio é na segunda-feira!");
			break;
		case '3':
			printf ("\nSeu rodízio é na terça-feira!");
			break;
		case '4':
			printf ("\nSeu rodízio é na terça-feira!");
			break;
		case '5':
			printf ("\nSeu rodízio é na quarta-feira!");
			break;
		case '6':
			printf ("\nSeu rodízio é na quarta-feira!");
			break;
		case '7':
			printf ("\nSeu rodízio é na quinta-feira!");
			break;
		case '8':
			printf ("\nSeu rodízio é na quinta-feira!");
			break;
		case '9':
			printf ("\nSeu rodízio é na sexta-feira!");
			break;
		case '0':
			printf ("\nSeu rodízio é na sexta-feira!");
			break;
		default:
			printf("\nDigite um final de placa válido!");
			break;
	}
	return 0;
}
