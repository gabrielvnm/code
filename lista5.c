#include <stdio.h>

int main()
{
	int n1,n2,n3,n4,n5;

	printf("Digite 5 valores:\n");
	scanf("%d %d %d %d %d",&n1,&n2,&n3,&n4,&n5);

	printf("Grafico:\n");

	for (int i=1; i<=n1; i+=1)
	{
		printf("*");
	}

	printf(" = %d\n",n1);

	for (int i=1; i<=n2; i+=1)
	{
		printf("*");
	}

	printf(" = %d\n",n2);

	for (int i=1; i<=n3; i+=1)
	{
		printf("*");
	}

	printf(" = %d\n",n3);

	for (int i=1; i<=n4; i+=1)
	{
		printf("*");
	}

	printf(" = %d\n",n4);

	for (int i=1; i<=n5; i+=1)
	{
		printf("*");
	}
	printf(" = %d\n",n5);
}