/*remove o caractere na posicao p da string s*/

#include <stdio.h>
#include <locale.h>
#include <string.h>

void strdel(char s[101], int p) {
	int i;
	
	for (i = p; s[i] != '\0'; i++) {
		s[i] = s[i + 1];
	}
	s[i] = '\0';
}

int main() {
	setlocale(LC_ALL, "portuguese");
	
	int pos;
	char fr[101];
	
	printf("\nDigite uma frase de até 100 caracteres: ");
	fgets(fr, sizeof(fr), stdin);
	fr[strcspn(fr, "\n")] = '\0';
	
	printf("\nSua frase tem %d caracteres.", strlen(fr));
	
	do {
		printf("\nDigite a posição do caractere que quer apagar: ");
		scanf("%d", &pos);
		if(pos < 0 || pos > strlen(fr)) {
			printf("\nDigite uma posição válida!");
		}
	} while (pos < 0 || pos > strlen(fr));
	
	strdel(fr, pos);
	
	printf("\nA frase com o caractere apagado é: ");
	printf("\n%s", fr);
	
	return 0;
}
