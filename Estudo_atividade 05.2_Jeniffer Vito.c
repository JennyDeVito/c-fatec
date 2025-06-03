/*macro booleana*/
#include <stdio.h>
#define not !
#define and &&
#define or ||
#define false 0
#define true 1
#define bool(x) ((x)?"Verdadeiro":"Falso")
int main()
{
	printf ("%s ", bool(not false));
	printf ("%s ", bool(false and true));
	printf ("%s ", bool(true or false));
	return 0;
}
