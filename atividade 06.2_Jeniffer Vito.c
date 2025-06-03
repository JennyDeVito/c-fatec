/*rodizio com funcao para entrada de dados*/
#include <stdio.h>
#include <locale.h> //biblioteca que inclui caracteres acentuados para alem dos caracteres ASCII
/*funcao para leitura da placa*/
void rodizio (char fp) {
	switch (fp) {
		case '1':
			printf ("\nSeu rod�zio � na segunda-feira!");
			break;
		case '2':
			printf ("\nSeu rod�zio � na segunda-feira!");
			break;
		case '3':
			printf ("\nSeu rod�zio � na ter�a-feira!");
			break;
		case '4':
			printf ("\nSeu rod�zio � na ter�a-feira!");
			break;
		case '5':
			printf ("\nSeu rod�zio � na quarta-feira!");
			break;
		case '6':
			printf ("\nSeu rod�zio � na quarta-feira!");
			break;
		case '7':
			printf ("\nSeu rod�zio � na quinta-feira!");
			break;
		case '8':
			printf ("\nSeu rod�zio � na quinta-feira!");
			break;
		case '9':
			printf ("\nSeu rod�zio � na sexta-feira!");
			break;
		case '0':
			printf ("\nSeu rod�zio � na sexta-feira!");
			break;
		default:
			printf ("\nDigite um final de placa v�lido!");
			break;
	}
}

/*programa principal*/
int main() 
{
	setlocale (LC_ALL, "portuguese"); //configuracao da bibioteca para caracteres em pt
	char x; //usar char nessa entrada - se usar int nessa variavel ele vai dar erro com a entrada de caracteres que nao sejam numeros
	printf ("\nDigite o final da sua placa: ");
	scanf ("%c", &x);
	rodizio(x);
	return 0;
}
