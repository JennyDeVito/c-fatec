/*calcula o resto da divisão usando apenas subtracao*/
#include <stdio.h>
#include <locale.h>

int res(int divid, int divis){
    if (divid < divis) return divid;
    return res(divid - divis, divis);
}

int main (){
	setlocale (LC_ALL, "portuguese");
    int a, b;
    //int check; //variavel para confirmar o resultado
    printf ("\nDigite o dividendo: ");
    scanf ("%d", &a);
    printf ("\nDigite o divisor: ");
    scanf ("%d", &b);
    printf("\nO resto da divisão de %d por %d é %d.", a, b, res(a, b));
    //check = a % b; // operacao que confirma o resultado
    //printf ("\nConfirmação do resultado: %d", check); // teste de confirmacao do resultado
    return 0;
}
