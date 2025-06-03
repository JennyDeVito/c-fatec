/*potencia recursiva*/

#include <stdio.h>
double pot(double x, unsigned int y) {
	if (y == 0)
		return 1;
	if (y == 1) 
		return x;
	return x * pot(x, y - 1);
}

int main() {
	double a;
	unsigned int b;
	printf("\nDigite a e b: ");
	scanf("%lf %u", &a, &b);
	printf("\n%.0lf elevado a %u: %.0lf", a, b, pot(a, b));
	return 0;
}

