#include <stdio.h>

int main()
{
	int tempo,dias,horas,min,seg;

	printf("Digite uma quantidade de segundos:\n");
	scanf("%d",&tempo);

	dias = tempo/86400;
	horas = tempo%86400/3600;
	min = tempo%86400%3600/60;
	seg = tempo%86400%3600%60;

	printf("%d segundos sao equivalentes a %d dias, %d horas, %d minutos e %d segundos.",tempo, dias, horas, min, seg);
}