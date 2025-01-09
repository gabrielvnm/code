// exercicio 3

#include <stdio.h>

int main()
{
	float n1,n2,n3,p1,p2,p3,M;
	printf("Digite suas notas\n");
	scanf("%f %f %f",&n1,&n2,&n3);
	printf("Digite os pesos\n");
	scanf("%f %f %f",&p1,&p2,&p3);
	M=((n1*p1)+(n2*p2)+(n3*p3))/(p1+p2+p3);
	printf("sua media sera de %f",M);

}

