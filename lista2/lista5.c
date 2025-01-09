#include <stdio.h>

int main(void)
{
	int dia, mes, ano, n1, n2, n3, n4, perfil;

	printf("Sua data de nascimento\nDia: ");
	scanf("%d",&dia);
	printf("\nMes: ");
	scanf("%d",&mes);
	printf("\nAno: ");
	scanf("%d",&ano);

	n1 = dia*100+mes+ano;
	n2 = n1/100;
	n3 = n1%100;
	n4 = n2+n3;
	perfil = n4%5;


	switch(perfil)
	{
		case 0:
			printf("Timido");
			break;
		case 1:
			printf("Sonhador");
			break;
		case 2:
			printf("Paquerador");
			break;
		case 3:
			printf("Atraente");
			break;
		case 4:
			printf("Irresistivel");
			break;
	}

}