/*concatena duas strings*/

#include <stdio.h>
#include <locale.h>
#include <string.h>

char *concat(const char *s, const char *t) {
	char r[202];
	int i, j;
	
	for(i = 0; s[i] != '\0'; i++) {
		r[i] = s[i];
	}
	
	for(j = 0; t[0] != '\0'; j++) {
		r[i + j] = t[j];
	}
	
	r[i + j] = '\0';
	
	return r;
}

int main() {
	setlocale(LC_ALL, "portuguese");
	
	char fra[101], frb[101];
	char novafrase[202];
	
	printf("\nDigite a primeira frase: ");
	fgets(fra, sizeof(fra), stdin);
	fra[strcspn(fra, "\n")] = '\0';
	
	printf("\nDigite a segunda frase: ");
	fgets(frb, sizeof(frb), stdin);
	frb[strcspn(frb, "\n")] = '\0';
	
	*novafrase = concat(fra, frb);
	
	printf("\nSua nova frase é: ");
	printf("\n%s", novafrase);
	
	return 0;	
}
