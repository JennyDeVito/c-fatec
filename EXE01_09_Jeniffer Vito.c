/*operador condicional ternario para exibir true e false*/
#include <stdio.h>
#include <locale.h>
int main() {
	setlocale (LC_ALL, "portuguese");
	int vl;
	printf ("\nDigite um valor l�gico: ");
	scanf ("%d", &vl);
	printf ("O valor l�gico � %s.", (vl==0)?"false":"true");
	return 0;
}
