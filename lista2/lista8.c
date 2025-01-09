#include <stdio.h>

int main(void)
{
	float a1, a2, a3;

	printf("Digite o comprimento dos 3 lados de um triangulo:\n");
	scanf("%f %f %f", &a1, &a2, &a3);


	if (a1 == a2 && a2 == a3)
	{
		printf("Triangulo equilatero.");
	}
	else if (a1+a2 <= a3 || a1+a3 <= a2 || a2+a3 <= a1)
	{
		printf("Esse triangulo nao existe.");
	}
	else if (a1 == a2 || a2 == a3 || a1 == a3)
	{
		printf("Triangulo isoceles");
	}
	else if (a1 != a2 && a2 != a3 && a1 != a3)
	{
		printf("Triangulo escaleno");
	}
}