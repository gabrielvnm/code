#include <stdio.h>
#include <ctype.h>

int main(){

	char unidade;
	float tempC, tempF, tempK;

	printf("\n A temperatura esta em (K), (C) ou (F)?:\n ");
	scanf("%c",&unidade);

	unidade = toupper(unidade);

	if(unidade == 'C')
	{
		printf("\nDigite uma temperatura em Celsius:\n");
		scanf("%f",&tempC);

		tempF = (tempC*9/5)+32;
		tempK = tempC + 273;

		printf("\nA temperatura em Farenheit eh %.1f, e a temperatura em Kelvin eh %.1f.",tempF,tempK);
	}
	else if(unidade == 'F')
	{
		printf("\nDigite uma temperatura em Farenheit:\n");
		scanf("%f",&tempF);

		tempC = ((tempF-32)*5)/9;
		tempK = tempC + 273;

		printf("\nA temperatura em Celsius eh %.1f, e a temperatura em Kelvin eh %.1f.",tempC,tempK);
	}
	else if(unidade == 'K')
	{
		printf("\nDigite uma temperatura em Kelvin:\n");
		scanf("%f",&tempK);

		tempC = tempK - 273;
		tempF = (tempC*9/5)+32;

		printf("\nA temperatura em Celsius eh %.1f, e a temperatura em Farenheit eh %.1f.",tempC,tempF);
	}
	else
	{
		printf("\n %c nao eh uma unidade valida de temperatura.",unidade);
	}
	
}