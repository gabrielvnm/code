#include <stdio.h>

int main(void)
{
	int I;
	float n1, n2, n3, aux;

	printf("Digite 3 numeros:\n");
	scanf("%f %f %f", &n1, &n2, &n3);

	printf("Escolha uma opcao:\n1: Ordem crescente\n2: Ordem decrescente\n3: Maior numero entre os outros\n: ");
	scanf("%d",&I);

	if (n2<n1)
	{
		aux = n1;
		n1 = n2;
		n2 = aux;
	}
	if (n3<n1)
	{
		aux = n1;
		n1 = n3;
		n3 = aux;
	}
	if (n3<n2)
	{
		aux = n2;
		n2 = n3;
		n3 = aux;
	}

	switch (I)
	{
		case 1: 
			printf("Ordem crescente: %.2f %.2f %.2f",n1,n2,n3);
			break;
		case 2:
			printf("Ordem crescente: %.2f %.2f %.2f",n3,n2,n1);
			break;
		case 3:
			printf("Maior entre os outros: %.2f %.2f %.2f",n2,n1,n3);
			break;
		default: 
			printf("Digite uma opcao valida");
			break;
	}
}