#include <stdio.h>

int main(void)
{

	float peso, altura;

	printf("Digite seu peso em kg e sua altura em cm:\n");
	scanf("%f %f",&peso, &altura);

	if (peso > 90)
	{
		if (altura > 170)
		{
			printf("Sua classificacao: I");
		}
		else if (altura <= 170 && altura >= 120)
		{
			printf("Sua classificacao: H");
		}
		else if (altura < 120)
		{
			printf("Sua classificacao: G");
		}
	}
	else if (peso <=90 && peso > 60)
	{
		if (altura > 170)
		{
			printf("Sua classificacao: F");
		}
		else if (altura <= 170 && altura >= 120)
		{
			printf("Sua classificacao: E");
		}
		else if (altura < 120)
		{
			printf("Sua classificacao: D");
		}
	}
	else if (peso < 60)
	{
		if (altura > 170)
		{
			printf("Sua classificacao: C");
		}
		else if (altura <= 170 && altura >= 120)
		{
			printf("Sua classificacao: B");
		}
		else if (altura < 120)
		{
			printf("Sua classificacao: A");
		}
	}

	

	
}