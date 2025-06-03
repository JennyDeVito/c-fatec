/*copia duas strings para uma terceira com alocacao de memoria*/

#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h> // Para usar malloc e free

char *concat(const char *s, const char *t) {
    // Aloca memória para a nova string
    char *r = (char *)malloc(202 * sizeof(char)); // 202 para acomodar ambas as strings e o '\0'
    if (r == NULL) {
        printf("Erro: Falha na alocação de memória\n");
        return NULL; // Retorna NULL se a alocação falhar
    }

    int i, j;

    // Copia a primeira string
    for (i = 0; s[i] != '\0'; i++) {
        r[i] = s[i];
    }

    // Copia a segunda string
    for (j = 0; t[j] != '\0'; j++) {
        r[i + j] = t[j];
    }

    // Adiciona o caractere nulo
    r[i + j] = '\0';

    return r; // Retorna o ponteiro para a nova string
}

int main() {
    setlocale(LC_ALL, "portuguese");

    char fra[101], frb[101];

    printf("\nDigite a primeira frase: ");
    fgets(fra, sizeof(fra), stdin);
    fra[strcspn(fra, "\n")] = '\0';

    printf("\nDigite a segunda frase: ");
    fgets(frb, sizeof(frb), stdin);
    frb[strcspn(frb, "\n")] = '\0';

    // Chama a função corretamente
    char *novafrase = concat(fra, frb); // Removido o tipo na chamada

    if (novafrase != NULL) { // Verifica se a alocação foi bem-sucedida
        printf("\nSua nova frase é: ");
        printf("\n%s", novafrase);
        free(novafrase); // Libera a memória alocada
    }

    return 0;    
}

