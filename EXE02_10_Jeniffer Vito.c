/*informa a ocorrencia de c na string ou retorna -1 caso nao haja c na string*/
#include <stdio.h>
#include <locale.h>
#include <string.h>

int strpos (char s[101], char c) {
	int p;
	for (p = 0; s[p] != '\0'; p++) {
		if (s[p] == 'c') {
			return p;
		}
	}
	return -1;
}

int main() {
	setlocale (LC_ALL, "portuguese");
	
	char fr[101];
	int pos;
	
	printf ("\nDigite uma frase de até 100 caracteres: ");
	fgets (fr, sizeof(fr), stdin);
	fr[strcspn (fr, "\n")] = '\0'; 
	
	pos = strpos (fr, 'c');
	
	if(pos != -1) {
		printf("\nO primeiro caractere c está na posição %d.", pos);
	}
	else {
		printf("\nNão há caractere c na frase digitada (%d).", pos);
	}
	
	return 0;
}
