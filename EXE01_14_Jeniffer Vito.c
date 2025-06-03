/*valores das variaveis*/
#include <stdio.h>
#include <locale.h>
int main() {
	setlocale (LC_ALL, "portuguese");
	int x, y;
	x = 5;
	y = x++ + ++x;
	printf ("\na) Seja x = 5 e a instrução y = x++ + ++x. \nApós sua execução, x será %d e y será %d.", x, y);
	x = 3;
	y = x * (x + 1) * x++;
	printf ("\nb) Seja x = 3 e a instrução y = x * (x + 1) * x++. \nApós sua execução, x será %d e y será %d.", x, y);
	x = 5;
	y = 3;
	y *= x + 1;
	printf ("\nc) Seja x = 5 e y = 3 e a instrução y *= x + 1. \nApós sua execução, x será %d e y será %d.", x, y);
	//teste
	x = 12;
	y = 12;
	printf ("\nTestando x = 12 e y = 12 com x++ e ++y, será %d e %d", x++, ++y);
	x = 5;
	y = ++x + x++;
	printf ("\nSeja x = 5 e a instrução y = ++x + x++. \nApós sua execução, x será %d e y será %d.", x, y);
	return 0;
}
