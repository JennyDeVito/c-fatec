/*exemplo de funcao para calcular uma hipotenusa*/
#include <stdio.h>
#include <math.h>
#include <locale.h>

/*funcao hipotenusa*/
float hip (float a, float b) {
	float c;
	c = sqrt(pow(a,2)+pow(b,2));
	return c;
}

/*programa principal*/
int main () {
	setlocale (LC_ALL, "portuguese");
	float c1, c2, h;
	c1 = 3;
	c2 = 4;
	h = hip(c1, c2);
	printf ("%.0f", h);
	return 0;
}
