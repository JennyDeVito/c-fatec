/*calcula a dist�ncia entre dois pontos*/
#include <stdio.h>
#include <locale.h>
#include <math.h>

typedef struct {
	float x;
	float y;
}PONTO;

float distancia (PONTO p, PONTO q) {
	float dist;
	dist = sqrt(pow((q.x)-(p.x),2)+pow((q.y)-(p.y),2));
	return dist;
}

int main () {
	setlocale (LC_ALL, "portuguese");
	
	PONTO p, q;
	float resultado;
	
	printf ("\nDigite as coordenadas x e y do ponto P, separadas por espa�o: ");
	scanf ("%f %f", &p.x, &p.y);
	
	printf ("\nDigite as coordenadas x e y do ponto Q, separadas por espa�o: ");
	scanf ("%f %f", &q.x, &q.y);
	
	resultado = distancia (p, q);
	
	printf ("\nA dist�ncia entre os dois pontos � %.2f", resultado);
	
	return 0;
}
