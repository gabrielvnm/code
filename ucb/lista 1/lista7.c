#include <stdio.h>

int main()
{
	float n1,n2;

	printf("Digite dois numeros:\n");
	scanf("%f %f",&n1,&n2);

	if (n1>n2)
	{
		printf("O maior numero eh %.3f",n1);
	}
	else
	{
		printf("O maior numero eh %.3f",n2);
	}

}