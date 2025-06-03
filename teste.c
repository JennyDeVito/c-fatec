#include <stdio.h>
#include <locale.h>
#include <string.h> // Inclua esta biblioteca para usar strcspn

int main() {
    setlocale(LC_ALL, "portuguese");
    int pos;
    char nome[50]; // Aumentando o tamanho do array

    printf("\nDigite nome e sobrenome: ");
    fgets(nome, 50, stdin); // L� a entrada do usu�rio

    printf("Voc� digitou: %s\n", nome); // Verifica a entrada

    pos = strcspn(nome, "\n"); // Encontra a posi��o do \n
    nome[pos] = '\0'; // Substitui o \n por \0

    printf("\nOl�, %s!\n", nome); // Exibe o nome completo
    return 0;
}
