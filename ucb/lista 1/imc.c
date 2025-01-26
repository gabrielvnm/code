#include <stdio.h>
#include <math.h>

int main(){
	
	float peso, altura, imc;

	printf("Digite seu peso em kg:\n");
	scanf("%f",&peso);

	printf("Digite sua altura em metros:\n");
	scanf("%f",&altura);

	imc=peso/(altura*altura);

	printf("Seu imc eh %.2f\n",imc);

	if (imc<17.0)
		printf("Ta magrelin demais bora comer ai\n");
	
	if (imc>30)
		printf("ta grande monstro saindo da jaula\n");
	
	else
		printf("certin pode ficar tranks\n");
	
}