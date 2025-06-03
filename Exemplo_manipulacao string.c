/*exemplo comparacao errada de strings*/
#include <stdio.h>
#include <string.h>
int main(){
 	char x[] = "um";
    char y[] = "um";
    printf("%s == %s ? \t", x, y);
    printf("%c", strcmp(x,y)==0? 'V' : 'F'); //compara o endereco do vetor x com o endereco do vetor y
	return 0; 
}

