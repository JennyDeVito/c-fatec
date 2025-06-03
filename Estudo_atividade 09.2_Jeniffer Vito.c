/*atribuicao de vetores*/
#include <stdio.h>
#include <locale.h>
int main () {
	setlocale (LC_ALL, "portuguese");
	int w[9], i, c=0;
	i = 5;
	w[0] = 17;
	w[i/2] = 9;
	w[2*i-2] = 95;
	w[i-1] = w[8]/2;
	w[i] = w[2];
	w[i+1] = w[i] + w[i-1];
	w[w[2]-2] = 78;
	w[1] = w[w[i]-1];
	//printf ("\n%d",w); imprimir diretamente a lista nao funciona, precisa fazer o loop
	for(c=0;c<=8;c++) { //loop para impressao do vetor
		printf ("\no item %d, a posição %d da array é %d", c+1, c, w[c]);
	}
	return 0;
}
