/*execucao de variaveis compactadas*/
#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale (LC_ALL, "portuguese");
	int x, y;
	x = 3;
	printf ("\nO valor inicial de x � %d: ", x);
	y = x * (x + 1) * x++;
	printf ("\nDada a instru��o y = x * (x + 1) * x++, y � igual a %d e x � igual a %d.", y, x);
	x = 5;
	y = 3;
	y *= x + 1;
	printf ("\nAgora, sendo x=5 e y=3 e a instru��o y*=x+1, x ser� %d e y ser� %d.", x, y);
	return 0;
}
