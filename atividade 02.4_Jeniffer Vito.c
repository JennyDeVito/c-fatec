/*codigo do caractere*/
#include <stdio.h>
int main()
{
	char c;
	printf ("\nDigite um caractere: ");
	scanf ("%c", &c);
	printf ("\nASCII decimal: %d", c);
    printf ("\nASCII octal: %o", c);
    printf ("\nASCII hexadecimal: %x", c);
    return 0;
}
