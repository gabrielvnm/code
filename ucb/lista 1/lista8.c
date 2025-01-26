#include <stdio.h>

int main()
{
	float n1,n2,n3;

	printf("Digite tres numeros:\n");
	scanf("%f %f %f",&n1,&n2,&n3);

	if (n1<n2)
	{
		if (n1<n3) 
		{
			if (n2<n3)
			{
				printf("Os numeros em ordem: %.1f %.1f %.1f",n3,n2,n1);
			}
			else 
			{
				printf("Os numeros em ordem: %.1f %.1f %.1f",n2,n3,n1);
			}
		}
		else  
		{
			printf("Os numeros em ordem: %.1f %.1f %.1f",n2,n1,n3);
		}
	}
	else if (n1<n3) 
	{
		if (n2<n3) 
		{
			printf("Os numeros em ordem: %.1f %.1f %.1f",n3,n1,n2);
		}
		else
		{
			printf("Os numeros em ordem: %.1f %.1f %.1f",n1,n2,n3);
		}
	}
	else 
	{
		if (n2<n3)
		{
			printf("Os numeros em ordem: %.1f %.1f %.1f",n1,n3,n2);
		}
		else
		{
			printf("Os numeros em ordem: %.1f %.1f %.1f",n1,n2,n3);
		}
	}
}