/*faz leitura de arquivos*/

#include <stdio.h>
#include <locale.h>
#include <string.h>

int main () {
	setlocale(LC_ALL, "portuguese");
	FILE *fptr; //fptr: ponteiro do aquivo
	char fname[101], c;
	
	printf("\nType the filename: ");
	fgets(fname, sizeof(fname), stdin);
	fname[strcspn(fname, "\n")] = '\0';
	
	if((fptr=fopen(fname, "r"))==NULL)
		printf("\nFile can't be opened!\n");
	else {
		do {
			c = fgetc(fptr);
				if(!feof(fptr))
					putchar(c);
		}while(!feof(fptr));
		
				fclose(fptr);
	}
		
	return 0;
}
