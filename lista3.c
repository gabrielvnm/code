#include <stdio.h>

int main()
{
	int i,n1,n2;

	printf("Digite uma quantidade de numeros para comparacao:\n");
	scanf("%d",&i);

	printf("Digite um numero:\n");
	scanf("%d",&n1);

	for (int f=1; f<i; f+=1)
	{
		printf("Digite outro numero:\n");
		scanf("%d",&n2);

		if (n2<n1)
		{
			n1 = n2;
		}
	}

	printf("O menor numero eh: %d",n1);

}