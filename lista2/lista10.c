#include <stdio.h>
#include <math.h>

int main(void)
{
	int I;
	float n1, result;

	printf("Digite um numero:\n");
	scanf("%f", &n1);

	printf("Escolha uma opcao:\n1: Quadrado\n2: Cubo\n3: Raiz quadrada\n4: Raiz cubica\n: ");
	scanf("%d",&I);

	switch (I)
	{
		case 1: 
			result = n1*n1;
			printf("Resultado: %.2f",result);
			break;
		case 2:
			result = n1*n1*n1;
			printf("Resultado: %.2f",result);
			break;
		case 3:
			result = sqrt(n1);
			printf("Resultado: %.2f",result);
			break;
		case 4:
			result = cbrt(n1);
			printf("Resultado: %.2f",result);
			break;
		default: 
			printf("Digite uma opcao valida");
			break;
	}
}