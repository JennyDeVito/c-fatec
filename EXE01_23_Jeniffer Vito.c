/*caixa registrador com desconto por faixa de valor*/
#include <stdio.h>
#include <locale.h>

/*funcao entrada de dados*/
float ent_dados (float compra) {
	int itens;
	float valor;
	compra = 0;
	do {
		printf ("\nDigite o número de itens \n [Pressione 0 para SAIR: ]\n");
		scanf ("%d", &itens);
		if (itens < 0) {
			printf ("\nDigite um número positivo ou zero para sair!");
		}
		printf ("\nDigite o valor do item: \n [Pressione 0 para SAIR: ]\n");
		scanf ("%f", &valor);
		if (valor < 0) {
			printf ("\nO valor do produto deve ser positivo!");
		}
		compra += (itens * valor); //compra = compra + (itens * valor)
		printf ("\nSubtotal: R$ %15.2f \n", compra); //teste da logica
	} while (itens != 0);
	return compra;
}

/*funcao desconto*/
float desconto (float compra) {
	float total;
	if (compra < 50.00) 
		total = compra * 0.95;
	else
		if (compra <= 100.00)
			total = compra * 0.90;
		else 
			if (compra <= 200.00)
				total = compra * 0.85;
			else 
				total = compra * 0.80;
	return total;	
}

/*programa principal*/
int main() {
	setlocale (LC_ALL, "portuguese");
	float vlcomp, vltot;
	vlcomp = ent_dados(1);
	vltot = desconto(vlcomp);
	system ("cls");
	printf ("\nO valor total da compra foi: R$%5.2f", vltot);
	return 0;
}
