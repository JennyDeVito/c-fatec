/*imprime vetor e posicao de ponteiro*/
#include <stdio.h>
int main() {
	int v[5] = {17, 29, 36, 44, 51}, i;
	for (i = 0; i < 5; i++) {
		printf ("%p: ", (v + i));
		printf ("%d \n", *(v + i));
	}
	return 0;
}

