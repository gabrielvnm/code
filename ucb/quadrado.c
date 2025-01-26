#include <stdio.h>

int main()
{
	int input;

	printf("type in the size of a square:\n");
	scanf("%d",&input);

	for (int f=1; f<=input; f+=1)
	{
		for (int i=1; i<=input; i+=1)
		{
			printf("* ");
		}
		printf("\n");
	}

}