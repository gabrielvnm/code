#include <stdio.h>

int main()
{
	int op, p1, p2, p3, p4;
	float n1, n2, n3, n4, media;
		
	printf("Selecione uma opcao:\n1: Media ponderada\n2: Media aritmetica\n");
	scanf("%d",&op);

	switch(op)
	{
		default:
			printf("Opcao invalida.");
			break;
		case 1:
			
			printf("Digite suas notas:\n");
			scanf("%f %f %f %f",&n1,&n2,&n3,&n4);
			printf("Digite os pesos:\n");
			scanf("%d %d %d %d",&p1,&p2,&p3,&p4);

			media = ((n1*p1)+(n2*p2)+(n3*p3)+(n4*p4))/(p1+p2+p3+p4);

			printf("Sua media = %.1f",media);

			break;
		case 2:

			printf("Digite suas notas:\n");
			scanf("%f %f %f %f",&n1,&n2,&n3,&n4);

			media = (n1+n2+n3+n4)/4;

			printf("Sua media = %.1f",media);

			break;

	}
}