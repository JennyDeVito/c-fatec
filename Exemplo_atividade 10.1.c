#include <stdio.h>
#include <string.h>
int main(){
	 char s[100];
    int c=0,  i=0;
    printf("\nDigite uma frase: ");
    fgets(s, 100, stdin);
    while (s[i]!='\0'){		
	   if  (s[i]!=' ')  i++;
      else {
			  c++;
             while (s[i] == ' ')  i++;
	    	}
    } c++;
    printf("\nVoce digitou %d palavras.", c);
	 return 0;
}

