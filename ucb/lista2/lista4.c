#include <stdio.h>

int main(void)
{
	int temp;

	printf("Digite uma temperatura em graus Celsius:\n");
	scanf("%d",&temp);

	if (temp<10)
	{
		printf("Muito frio");
	}
	else if (temp>=10 && temp <=20)
	{
		printf("Frio");
	}
	else if (temp>=21 && temp <=30)
	{
		printf("Agradavel");
	}
	else if (temp>=30 && temp <=40)
	{
		printf("Quente");
	}
	else
	{
		printf("Muito quente");
	}


}