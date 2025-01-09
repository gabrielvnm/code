#include <stdio.h>
#include <math.h>

int main()
{

	float n1,n2,n3,n4,n5;

	printf("Digite um numero positivo maior que zero:\n");
	scanf("%f",&n1);

	n2 = n1*n1;
	n3 = n1*n1*n1;
	n4 = sqrt(n1);
	// n5 = pow(n1,1/3);
	n5 = cbrt(n1);

	printf("O numero %.3f \nAo quadrado = %.3f \nAo cubo = %.3f \nA raiz quadrada = %.3f \nA raiz cubica = %.3f", n1,n2,n3,n4,n5);

}