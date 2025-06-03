/*conta palavras em uma string*/
#include <stdio.h>
#include <string.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "Portuguese");
    char str[100];
    int i, cont=0;
    printf("Digite uma string: ");
    gets(str);
    for(i=0; i<strlen(str); i++){
        if(str[i]==' '){
            cont++;
        }
    }
    printf("A string tem %d palavras\n", cont+1);
    return 0;
}