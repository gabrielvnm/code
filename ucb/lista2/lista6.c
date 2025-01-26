#include <stdio.h>

int main(void)
{
	int n1,n2,n3,n4,aux;

	printf("Digite tres numeros em ordem crescente:\n");
	scanf("%d %d %d",&n1,&n2,&n3);
	printf("\nDigite outro numero:\n");
	scanf("%d",&n4);

	if (n4<n1)
	{
		printf("Os numeros em ordem: %d %d %d %d",n3,n2,n1,n4);
	}
	else if(n4>n3)
	{
		printf("Os numeros em ordem: %d %d %d %d",n4,n3,n2,n1);
	}
	else if(n4>n2)
	{
		printf("Os numeros em ordem: %d %d %d %d",n3,n4,n2,n1);
	}
	else
	{
		printf("Os numeros em ordem: %d %d %d %d",n3,n2,n4,n1);
	}

}