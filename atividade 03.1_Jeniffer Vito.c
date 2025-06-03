/*informa se o numero e par ou impar*/
#include <stdio.h>
int main()
{
	int n; //nao usar float para esta variavel
	printf ("\nDigite um n%cmero: ", 163);
	scanf ("%d", &n);
	printf ("O n%cmero digitado %c %s", 163, 130, n%2==0? "par": "impar"); //par e impar sao strings entao de ser %s, o %c e da formatacao dos caracteres
	return 0;
}
