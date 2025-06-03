/*manipulacao ponteiro*/
#include <stdio.h>
int main () {
	char *p, y, x = 'A';
	p = &x;
	*p = 'B';
	y = *p;
	*p = 'C';
	printf ("\n x= %c \t y = %c", x, y);
	printf ("\n &x = %p \t &y = %p", &x, &y);
	printf ("\n p = %p \t *p = %c", p, *p);
	return 0;
}
