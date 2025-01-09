#include <stdio.h>
#include <math.h>

int main(void)
{
	int I, N1, N2, RESULT;
	float n1, n2, result;


	printf("Escolha uma opcao:\n1: Soma\n2: Subtracao\n3: Multiplicacao\n4: Divisao\n5: Potencia\n6: Raiz n\n7: Resto da divisao\n: ");
	scanf("%d",&I);


	switch (I)
	{
		case 1: 
			printf("Digite um numero:\n");
			scanf("%f", &n1);

			printf("Digite outro numero:\n");
			scanf("%f",&n2);

			result = n1+n2;

			printf("Resultado: %.2f",result);
			break;
		case 2:
			printf("Digite um numero:\n");
			scanf("%f", &n1);

			printf("Digite outro numero:\n");
			scanf("%f",&n2);

			result = n1-n2;

			printf("Resultado: %.2f",result);
			break;
		case 3:
			printf("Digite um numero:\n");
			scanf("%f", &n1);

			printf("Digite outro numero:\n");
			scanf("%f",&n2);

			result = n1*n2;

			printf("Resultado: %.2f",result);
			break;
		case 4:
			printf("Digite um numero:\n");
			scanf("%f", &n1);

			printf("Digite outro numero:\n");
			scanf("%f",&n2);

			result = n1/n2;

			printf("Resultado: %.2f",result);
			break;
		case 5:
			printf("Digite um numero:\n");
			scanf("%f", &n1);

			printf("Digite outro numero:\n");
			scanf("%f",&n2);
			result = pow(n1,n2);
			printf("Resultado: %.2f",result);
			break;
		case 6:

			printf("Digite um numero:\n");
			scanf("%f", &n1);

			printf("Digite outro numero:\n");
			scanf("%f",&n2);

			result = pow(n1,(1/n2));

			printf("Resultado: %.2f",result);
			break;
		case 7:
			printf("Digite um numero:\n");
			scanf("%d", &N1);

			printf("Digite outro numero:\n");
			scanf("%d",&N2);

			RESULT = N1%N2;

			printf("Resultado: %d",RESULT);
			break;
		default: 
			printf("Digite uma opcao valida");
			break;
	}
}