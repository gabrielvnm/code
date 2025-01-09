#include <stdio.h>
#include <math.h>

int main()
{
	int i1, n1, n2, n3;

	printf("digite um numero inteiro:\n");
	scanf("%d",&n1);

	n1=n1*2;
	n2=1;
	n3=n2;

	printf("%d",n2);


	for (i1=2; i1<n1; i1=i1+2)
	{
		
		n2=n2+2;
		printf("+%d",n2);
		n3=n3+n2;		

	}

	printf("\nResultado: %d",n3);

}