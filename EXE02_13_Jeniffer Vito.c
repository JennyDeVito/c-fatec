/*converte a string em maiuscula*/

#include <stdio.h>
#include <locale.h>
#include <string.h>
//#define maiuscula(c) (((c) >= 'a' && (c) <= 'z')?(c-32):(c))


/*a funcao nao pode se chamar srtupr porque da conflito com a biblioteca
string.h*/
void strmai(char s[101]) {
	int i;
	
	for (i = 0; s[i] != '\0'; i++) {
		if (s[i] >= 'a' && s[i] <= 'z') {
			s[i] = s[i] - 32;
		}
		else {
			s[i];
		}
	}	
}

int main() {
	setlocale(LC_ALL, "portuguese");
	
	char frase[101];
	
	printf("\nDigite uma frase de até 100 caracteres: ");
	fgets(frase, sizeof(frase), stdin);
	frase[strcspn(frase, "\n")] = '\0';
	
	strmai(frase);
	printf("\nSua frase, em maiúsculas: ");
	printf("\n%s", frase);
	
	return 0;
}
