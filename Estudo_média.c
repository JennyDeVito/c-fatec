/*alunos com media 6.0 sao aprovados, media inferior a 3 sao reprovados e os demais ficam de recuperacao. informe a situacao do aluno*/
#include <stdio.h>
int main()
{
	float n1, n2, m;
	printf ("\nDigite suas notas 1 e 2, separadas por espa%co: ", 135); //o input sempre eh feito separado por espacos
	scanf ("%f %f", &n1, &n2);
	m = (n1 + n2) / 2.0; //sempre forcar o float nas operacoes com variaveis deste tipo para nao ter erros
	if (m > 6.0)
		printf ("\nParab%cns, voc%c foi aprovado com m%cdia %.2f", 130, 136, 130, m);
	else
		if (m <= 3.0)
			printf ("\nVoc%c foi reprovado :'( Sua m%cdia foi %.2f", 136, 130, m);
		else
			printf ("\nVoc%c est%c de recupera%cao pois sua m%cdia foi %.2f ", 136, 160, 135, 130, m);
	return 0;
}
