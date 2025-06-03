/*com as temperaturas da semana, calcula a media e diz os dias que estao acima da media ou nao*/
#include <stdio.h>
#include <locale.h>
#define max 7

void obtem (float tsem[], int tam) {
	char dsem[7] = {'D','S','T','Q','Q','S','S'};
	int i;
	printf ("\nInforme as temperaturas da semana: ");
	for (i = 0; i < tam; i++) {
		printf ("\nTemperatura de %c: ", dsem[i]);
		scanf ("%f", &tsem[i]);
	}
}

/*teste da entrada de dados*/
void teste (float tsem[], int tam) {
	int i;
	printf ("\nTemperaturas: ");
	for (i = 0; i < tam; i++) {
		printf ("\n%dº temperatura digitada: %.2f", i+1, tsem[i]);
	}
}

float media(float tsem[], int tam) {
	int i;
	float tmed, soma = 0;
	for (i = 0; i < tam; i++) {
		soma += tsem[i];
	}
	tmed = soma / tam;
	return tmed;
}

int conta (float tsem[], float tmed, int tam) {
	int i, c = 0;
	for (i = 0; i < tam; i++) {
		if (tsem[i] > tmed)
			c += 1;
	}
	return c;
}

int main () {
	setlocale (LC_ALL, "portuguese");
	float t[max], x;
	int y;
	obtem(t, max);
	//teste(t, max);
	x = media(t, max);
	printf ("\nA temperatura média da semana foi de %.2f° Celsius.", x);
	y = conta(t, x, max);
	printf ("\n%d dia%s acima da média.", y, (y>1)?"s":"");
	return 0;
}
