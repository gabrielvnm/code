#include <stdio.h>

int main(void)
{
	int ano;

	printf("Digite um ano no formato AAAA:\n");
	scanf("%d",&ano);

	if (ano%4 == 0 && ano%100 != 0)
	{
		printf("O ano %d = bissexto.",ano);
	}
	else if (ano % 400 == 0)
	{
		printf("O ano %d = bissexto.",ano);
	}
	else 
	{
		printf("O ano %d = normal.",ano);
	}

}