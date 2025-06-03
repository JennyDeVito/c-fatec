#include <stdio.h>
#include <locale.h>
#include <string.h> // Inclua esta biblioteca para usar strcspn

int main() {
    setlocale(LC_ALL, "portuguese");
    int pos;
    char nome[50]; // Aumentando o tamanho do array

    printf("\nDigite nome e sobrenome: ");
    fgets(nome, 50, stdin); // Lê a entrada do usuário

    printf("Você digitou: %s\n", nome); // Verifica a entrada

    pos = strcspn(nome, "\n"); // Encontra a posição do \n
    nome[pos] = '\0'; // Substitui o \n por \0

    printf("\nOlá, %s!\n", nome); // Exibe o nome completo
    return 0;
}
