/*execucao de variaveis compactadas*/
#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale (LC_ALL, "portuguese");
	int x, y;
	x = 3;
	printf ("\nO valor inicial de x é %d: ", x);
	y = x * (x + 1) * x++;
	printf ("\nDada a instrução y = x * (x + 1) * x++, y é igual a %d e x é igual a %d.", y, x);
	x = 5;
	y = 3;
	y *= x + 1;
	printf ("\nAgora, sendo x=5 e y=3 e a instrução y*=x+1, x será %d e y será %d.", x, y);
	return 0;
}
