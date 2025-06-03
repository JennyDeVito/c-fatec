/*concatena duas strings sem usar strcat*/

#include <stdio.h>
#include <locale.h>
#include <string.h>

void concat (char s[102], char t[51]) {
	int i, a = 0;
	
	for(i = (strlen(s)); ; i++) {
		s[i] = t[a];
		a++;
		
		if(t[a] == '\0') {
			break;
		}
	}
	s[i + a] = '\0';
}

int main() {
	setlocale(LC_ALL, "portuguese");
	
	char fra[101], frb[51];
	
	printf("\nDigite a primeira frase com até 50 caracteres: ");
	fgets(fra, sizeof(fra), stdin);
	fra[strcspn(fra, "\n")] = '\0';
	
	printf("\nDigite a segunda frase com até 50 caracteres: ");
	fgets(frb, sizeof(frb), stdin);
	frb[strcspn(frb, "\n")] = '\0';
	
	concat(fra, frb);
	
	printf("\nSua nova frase é: ");
	printf("\n%s", fra);
	
	return 0;	
}
