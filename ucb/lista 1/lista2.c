#include <stdio.h>
#include <math.h>

int main()
{
	float deposito, juros, meses, saldo1, saldo2, rend1, rend2;

	printf("Digite seu deposito, a taxa de juros e a quantidade de meses:\n");
	scanf("%f %f %f",&deposito,&juros,&meses);

	juros = juros/100;
	saldo1 = deposito*juros*meses+deposito;
	saldo2 = deposito*(pow((juros+1),meses));
	rend1 = saldo1-deposito;
	rend2 = saldo2-deposito;

	printf("Com juros simples, seu rendimento sera de %.2f e seu saldo final sera %.2f.\nCom juros compostos seu rendimento sera de %.2f e seu saldo final sera %.2f.",rend1,saldo1,rend2,saldo2);

}