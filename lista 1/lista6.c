#include <stdio.h>

int main()
{
	float n1,n2,n3,media;

	printf("Digite suas notas:\n");
	scanf("%f %f %f",&n1,&n2,&n3);

	media = ((n1*2)+(n2*3)+(n3*5))/10;

	printf("Sua media = %.2f\n",media);

	if (media<4.99)
	{
		printf("Voce tirou um E");
	}
	else if (media<5.99)
	{
		printf("Voce tirou um D");
	}
	else if (media<6.99)
	{
		printf("Voce tirou um C");
	}
	else if (media<7.99)
	{
		printf("Voce tirou um B");
	}
	else
	{
		printf("Voce tirou um A");
	}

}