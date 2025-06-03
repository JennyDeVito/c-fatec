/*calcula a area e o perimetro de um circulo*/
#include <stdio.h>
#define PI 3.1415
int main ()
{
	float r, a, p;
	printf ("\nDigite o raio do c%crculo, em m: ", 161);
	scanf ("%f", &r);
	a = PI * (r * r);
	p = 2 * PI * r;
	printf ("\nA %crea do c%crculo %c: %.2fm e seu per%cmetro %c: %.2fm", 160, 161, 130, a, 161, 130, p);
	return 0;
}
