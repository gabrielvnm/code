#include <stdio.h>

int main()
{
	float n1,n2,n3,media;

	printf("Digite suas notas:\n");
	scanf("%f %f %f",&n1,&n2,&n3);

	media = (n1+n2+n3)/3;

	if (media<3.00)
	{
		printf("Sua media = %.2f, voce esta Reprovado!",media);
	}
	else if (media<7.00)
	{
		printf("Sua media = %.2f, voce precisara fazer um Exame!",media);	
	}	
	else
	{
		printf("Sua media = %.2f, voce esta Aprovado!",media);
	}

}