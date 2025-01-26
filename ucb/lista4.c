#include <stdio.h>

int main()
{
	int i,n1;

	n1 = 1;

	for (i=1; i<=15; i=i+2)
	{
		n1 = n1*i;
		printf("%d \n",n1);
	}

	printf("resultado %d",n1);

}