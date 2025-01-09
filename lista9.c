#include <stdio.h>
#include <math.h>

int main()
{
	int i1, n1, n2, n3;

	printf("Digite qual numero da sequencia de fibonacci deseja calcular:\n");
	scanf("%d",&i1);

	if (i1 <=2)
	{
		switch (i1)
		{
			case 1:
				printf("O primeiro numero eh 1");
				break;
			case 2:
				printf("O segundo numero eh 1");
				break;
			default: 
				printf("Numero invalido.");
				break;
		}

	}

	else if (i1>2)
	{
		n1 = 1;
		n2 = 1;
		i1=i1-2;

		for (int i2=1; i2<=i1; i2=i2+1)
		{
		
			n3 = n1+n2;
			n1 = n2;
			n2 = n3;
			

		}
		printf("\nO numero eh %d",n3);
	}

}