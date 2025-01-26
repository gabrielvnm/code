#include <stdio.h>

int main()
{
	int n1,n2,nprimo;

	printf("Digite um numero inteiro:\n");
	scanf("%d",&n1);

	n2=n1/2;
	nprimo = 0;

	for (int i=2; i<n2; i+=1)
	{
		if(n1%i == 0)
		{
			nprimo = 1;
		}	

	}

	if (nprimo == 1)
	{
		printf("O numero %d nao eh primo",n1);
	}
	else
	{
		printf("O numero %d eh primo!",n1);
	}
	

}