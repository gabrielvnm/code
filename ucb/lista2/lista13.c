#include <stdio.h>

int main(void)
{
	int op;
	float salario;

	printf("Escolha uma opcao:\n1: Imposto\n2: Novo Salario\n3: Classificacao\n");
	scanf("%d",&op);

	switch (op)
	{
		case 1:
			
			printf("Digite seu salario:\n");
			scanf("%f",&salario);

			if (salario <= 500)
			{
				salario = salario*0.05;

				printf("O imposto cobrado sera de %.2f",salario);
			}
			else if (salario > 500 && salario <= 850)
			{
				salario = salario*0.1;

				printf("O imposto cobrado sera de %.2f",salario);
			}
			else if (salario > 850)
			{
				salario = salario*0.15;

				printf("O imposto cobrado sera de %.2f",salario);
			}
			break;

		case 2:

			printf("Digite seu salario:\n");
			scanf("%f",&salario);

			if (salario > 1500)
			{
				salario = salario + 25;
				printf("Seu novo salario sera de: %.2f",salario);
			}
			else if (salario <= 1500 && salario >= 750)
			{
				salario = salario + 50;
				printf("Seu novo salario sera de: %.2f",salario);
			}
			else if (salario < 750 && salario >= 450)
			{
				salario = salario + 75;
				printf("Seu novo salario sera de: %.2f",salario);
			}
			else if (salario < 450)
			{
				salario = salario + 100;
				printf("Seu novo salario sera de: %.2f",salario);
			}
			break;

		case 3:

			printf("Digite seu salario:\n");
			scanf("%f",&salario);

			if (salario > 700)
			{
				printf("Bem remunerado");
			}
			else
			{
				printf("Mal remunerado");
			}
			break;
			
		default:
			printf("Digite uma opcao valida");
			break;
	}

	

	
}