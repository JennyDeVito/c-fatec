/*exemplo de funcao para calcular uma hipotenusa*/
#include <stdio.h>
#include <math.h>
#include <locale.h>

/*funcao hipotenusa*/
float hip (float a, float b) {
	return (sqrt(pow(a,2)+pow(b,2)));
}

/*funcao validacao de dados*/
float valida (float x) {
	do {
		printf ("\nDigite o cateto: ");
		scanf ("%f", &x);
		if (x <= 0)
			printf ("\nValor inválido! Digite novamente: ");
	} while (x <= 0);
	return x;
}

/*funcao validacao de dados melhorada*/
float valida2 (const char *mensagem) {
    float valor;
    do {
        printf("%s", mensagem); // Usa a mensagem fornecida como argumento
        if (scanf("%f", &valor) != 1) { // Verifica se a leitura foi bem-sucedida
            printf("\nEntrada inválida. Digite um número válido.\n");
            // Limpa o buffer de entrada para evitar loop infinito
            while (getchar() != '\n');
            valor = 0; // Define valor para 0 para que o loop continue
        }
        if (valor <= 0) {
            printf("\nValor inválido! Digite novamente.\n");
        }
    } while (valor <= 0);
    return valor;
}

/*funcao input de inteiro*/
int inputi(const char *msg) {
	int valor;
	printf ("%s", msg);
	scanf ("%d", &valor);
	return valor;
}
/*funcao input de float*/
float inputf(const char *msg) {
	float valor;
	printf ("%s", msg);
	scanf ("%f", &valor);
	return valor;
}

/*programa principal*/
int main () {
	setlocale (LC_ALL, "portuguese");
	float h;
	//c1 = valida(c1);
	float c1 = valida2("\nDigite o primeiro cateto: ");
	//c2 = valida(c2);
	float c2 = valida2("\nDigite o segundo cateto: ");
	/*do {
		printf ("\nDigite o primeiro cateto: ");
		scanf ("%f", &c1);
		if (c1 <= 0)
			printf ("\nValor inválido! Digite novamente: ");
		printf ("\nDigite o segundo cateto: ");
		scanf ("%f", &c2);
		if (c2 <= 0)
			printf ("\nValor inválido! Digite novamente: ");
	} while (c1 <= 0 || c2 <= 0); */
	h = hip(c1, c2);
	printf ("%.2f", h);
	return 0;
}
