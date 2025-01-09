#include <stdio.h>
#include <math.h>

int main()
{
	int ano;
	float rendimento;


	for (ano=1; ano<=10; ano=ano+1)
	{
		rendimento = 1000*(pow(1.05,ano));
		printf("Rendimento no ano %d: %.2f\n",ano,rendimento);
	}

}