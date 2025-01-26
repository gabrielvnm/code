#include <stdio.h>

int main()
{
	float salario, aumento, aumento2, salario2;

	printf("Digite seu salario atual e o percentual de aumento:\n");
	scanf("%f %f",&salario, &aumento);

	aumento = aumento/100;
	aumento2 = salario*aumento;
	salario2 = salario+aumento2;

	printf("Apos um aumento de %.2f, seu novo salario sera de %.2f",aumento2,salario2);
}