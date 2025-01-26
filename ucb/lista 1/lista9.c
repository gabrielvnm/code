#include <stdio.h>

int main()
{
	int n1,n2,n3,n4,n5,n6;

	printf("Digite um numero de 5 digitos:\n");
	scanf("%d",&n1);

	n2 = n1/10000;
	n3 = n1%10000/1000;
	n4 = n1%10000%1000/100;
	n5 = n1%10000%1000%100/10;
	n6 = n1%10000%1000%100%10;

	printf("Aqui esta seu numero:\n %d   %d   %d   %d   %d",n2,n3,n4,n5,n6);

}