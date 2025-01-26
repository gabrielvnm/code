#include <stdio.h>

int main(void)
{
	int idade;

	printf("Digite sua idade:\n");
	scanf("%d",&idade);

	if (idade<12)
	{
		printf("Crianca",idade);
	}
	else if (idade>=12 && idade <=17)
	{
		printf("Adolescente",idade);
	}
	else if (idade>=18 && idade <=59)
	{
		printf("Adulto",idade);
	}
	else 
	{
		printf("Idoso",idade);
	}


}