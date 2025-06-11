/*transfere informacoes de um arquivo para outro*/

#include <stdio.h>
#include <locale.h>
#include <string.h>

int main () {
	setlocale(LC_ALL, "portuguese");

	FILE *fptro, *fptrd;
	char fnameo[21], fnamed[21], frase[201];

	printf("\nDigite o nome do arquivo.txt de origem (20 letras): ");
	fgets(fnameo, sizeof(fnameo), stdin);
	fnameo[strcspn(fnameo, "\n")] = '\0';

	printf("\nDigite o nome do arquivo.txt de destino (20 letras): ");
	fgets(fnamed, sizeof(fnamed), stdin);
	fnamed[strcspn(fnamed, "\n")] = '\0';

	if(((fptro=fopen(fnameo, "r")) == NULL) || ((fptrd=fopen(fnamed, "a+")) == NULL)) {
		printf("\nErro na abertura dos arquivos!");
	}
	else {
		while(fgets(frase, sizeof(frase), fptro) != NULL) {
			fputs(frase, fptrd);
		}
		fclose(fptro);
		fclose(fptrd);
	}
	return 0;
}
