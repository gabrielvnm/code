#include <stdio.h>

int main(){

	float n1,n2,n3,p1,p2,p3,M;

	printf("Digite suas notas:\n");
	scanf("%f %f %f",&n1,&n2,&n3);

	printf("digite os pesos\n");
	scanf("%f %f %f",&p1,&p2,&p3);

	M = ((n1*p1)+(n2*p2)+(n3*p3))/(p1+p2+p3);

	if(M>=9){
		printf("Sua media eh: %.1f, aprovado!\n",M);
	}
	if(M<7){
		printf("Sua media eh: %.1f, reprovado!\n",M);
	}
}