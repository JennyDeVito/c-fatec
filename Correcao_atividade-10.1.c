/*correcao atividade 10.1 - conta palavras em uma string com correcao para mais de um espaco*/
#include <stdio.h>
#include <locale.h>
#include <string.h>
int main() {
	setlocale (LC_ALL, "portuguese");
	char s[101];
	int i, c;
	printf ("\nDigite uma frase de até 100 caracteres: ");
	fgets (s, sizeof(s), stdin);
	s[strcspn (s, "\n")] = '\0'; // troca a quebra de linha do fgets pelo caractere nulo do fim da string
	while (s[i]!='\0'){		
		if  (s[i]!=' ')  i++;
    	else {
			c++;
            while (s[i] == ' ')  i++;
	    	}
    } c++;
	printf ("\nSua frase tem %d palavras.", c);
	return 0;
}
