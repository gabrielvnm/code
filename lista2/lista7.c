#include <stdio.h>

int main(void)
{
	int dia1, dia2, mes1, mes2, ano1, ano2;

	printf("Digite uma data:\nDia: ");
	scanf("%d",&dia1);
	printf("Mes: ");
	scanf("%d",&mes1);
	printf("Ano: ");
	scanf("%d",&ano1);

	printf("Digite outra data:\nDia: ");
	scanf("%d",&dia2);
	printf("Mes: ");
	scanf("%d",&mes2);
	printf("Ano: ");
	scanf("%d",&ano2);

	if (ano1<ano2)
	{
		printf("Data mais antiga: %d/%d/%d\nData mais recente: %d/%d/%d",dia1,mes1,ano1,dia2,mes2,ano2);
	}
	else if(ano1 == ano2 && mes1<mes2)
	{
		printf("Data mais antiga: %d/%d/%d\nData mais recente: %d/%d/%d",dia1,mes1,ano1,dia2,mes2,ano2);
	}
	else if(ano1 == ano2 && mes1 == mes2)
	{
		if (dia1<dia2)
		printf("Data mais antiga: %d/%d/%d\nData mais recente: %d/%d/%d",dia1,mes1,ano1,dia2,mes2,ano2);
		else 
		{
		printf("Data mais antiga: %d/%d/%d\nData mais recente: %d/%d/%d",dia2,mes2,ano2,dia1,mes1,ano1);
		}
	}
	else 
	{
		printf("Data mais antiga: %d/%d/%d\nData mais recente: %d/%d/%d",dia2,mes2,ano2,dia1,mes1,ano1);
	}

}