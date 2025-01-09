#include <stdio.h>

int main()
{
	float peso,quant,resto;

	printf("Digite o peso do saco em kg:\n");
	scanf("%f",&peso);

	printf("Digite a quantidade fornecida para cada gato diariamente em g:\n");
	scanf("%f",&quant);

	peso = peso*1000;
	quant = quant*10;
	resto = peso-quant;

	printf("Apos 5 dias, a quantidade de racao no saco sera de %.1f gramas",resto);
}