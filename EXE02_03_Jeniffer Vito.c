/*atribuição de vetores*/

#include <stdio.h>

int main() {
	int w[7], i = 3, c;
	w[i] = 32; //a 
	w[i/2] = 27; //b
	w[2 * i - 1] = 7; //c 
	w[1 + i] = w[1] + i; //d
	w[w[5] - 1] = w[i - 2] - 5; //e
	
	printf("\nVetor w[7]");
	for (c = 0; c < 7; c++) {
		printf("\nw[%d] = %d", c, w[c]);
	}
	
	//teste com vetores da questao 2
	/*int x[4];
	
	printf("\n");
	printf("\nVetor x[4]");
	for (c = 0; c < 4; c++) {
		printf("\nx[%d] = %d", c, x[c]);
	}
	
	char y[7];
	y[0] = 'x';
	y[1] = 'y';
	y[2] = 'z';
	y[3] = 'w';
	
	printf("\n");
	printf("\nVetor y[7]");
	for (c = 0; c < 7; c++) {
		printf("\ny[%d] = %c", c, y[c]);
	}*/
		
	return 0;
}
