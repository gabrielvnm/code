#include <stdio.h>

int main(void)
{
	int n1;

	printf("Digite um numero inteiro:\n");
	scanf("%d",&n1);

	if (n1%2 == 0)
	{
		printf("O numero %d = par.",n1);
	}
	else 
	{
		printf("O numero %d = impar.",n1);
	}

}