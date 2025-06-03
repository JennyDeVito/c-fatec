/*conversor de temperatura fahrenheit para celsius*/
#include <stdio.h>
int main ()
{
	float f, c;
	printf ("\nDigite a temperatura, em Fahrenheit: ");
	scanf ("%f", &f);
	c = (f - 32) * (5.0 / 9.0); //forcar um float para a conta funcionar
	printf ("\nA temperatura em Celsius %c: %.2f", 130, c);
	return 0;
}
