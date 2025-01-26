#include <stdio.h>

int main(void)
{

	int pais, codigo;
	float peso, imposto, valor, valor2;

	printf("Digite o codigo do pais, o peso em kg e o codigo do produto:\n");
	scanf("%d %f %d",&pais, &peso, &codigo);

	peso = peso*1000;

	switch(pais)
	{
		case 1:
			switch(codigo)
			{
				case 1:
					valor = peso*10;
					imposto = 0;
					valor2 = valor;
					break;
				case 2:
					valor = peso*10;
					imposto = 0;
					valor2 = valor;
					break;
				case 3:
					valor = peso*10;
					imposto = 0;
					valor2 = valor;
					break;
				case 4:
					valor = peso*10;
					imposto = 0;
					valor2 = valor;
					break;
				case 5:
					valor = peso*25;
					imposto = 0;
					valor2 = valor+imposto;
					break;
				case 6:
					valor = peso*25;
					imposto = 0;
					valor2 = valor+imposto;
					break;
				case 7:
					valor = peso*25;
					imposto = 0;
					valor2 = valor+imposto;
					break;
				case 8:
					valor = peso*35;
					imposto = 0;
					valor2 = valor+imposto;
					break;
				case 9:
					valor = peso*35;
					imposto = 0;
					valor2 = valor+imposto;
					break;
				case 10:
					valor = peso*35;
					imposto = 0;
					valor2 = valor+imposto;
					break;
				default:
					printf("Codigo invalido.");
					break;
			}
			break;
		case 2:
			switch(codigo)
			{
				case 1:
					valor = peso*10;
					imposto = valor*0.15;
					valor2 = valor;
					break;
				case 2:
					valor = peso*10;
					imposto = valor*0.15;
					valor2 = valor;
					break;
				case 3:
					valor = peso*10;
					imposto = valor*0.15;
					valor2 = valor;
					break;
				case 4:
					valor = peso*10;
					imposto = valor*0.15;
					valor2 = valor;
					break;
				case 5:
					valor = peso*25;
					imposto = valor*0.15;
					valor2 = valor+imposto;
					break;
				case 6:
					valor = peso*25;
					imposto = valor*0.15;
					valor2 = valor+imposto;
					break;
				case 7:
					valor = peso*25;
					imposto = valor*0.15;
					valor2 = valor+imposto;
					break;
				case 8:
					valor = peso*35;
					imposto = valor*0.15;
					valor2 = valor+imposto;
					break;
				case 9:
					valor = peso*35;
					imposto = valor*0.15;
					valor2 = valor+imposto;
					break;
				case 10:
					valor = peso*35;
					imposto = valor*0.15;
					valor2 = valor+imposto;
					break;
				default:
					printf("Codigo invalido.");
					break;
			}
			break;
			
		case 3:
			switch(codigo)
			{
				case 1:
					valor = peso*10;
					imposto = valor*0.25;
					valor2 = valor;
					break;
				case 2:
					valor = peso*10;
					imposto = valor*0.25;
					valor2 = valor;
					break;
				case 3:
					valor = peso*10;
					imposto = valor*0.25;
					valor2 = valor;
					break;
				case 4:
					valor = peso*10;
					imposto = valor*0.25;
					valor2 = valor;
					break;
				case 5:
					valor = peso*25;
					imposto = valor*0.25;
					valor2 = valor+imposto;
					break;
				case 6:
					valor = peso*25;
					imposto = valor*0.25;
					valor2 = valor+imposto;
					break;
				case 7:
					valor = peso*25;
					imposto = valor*0.25;
					valor2 = valor+imposto;
					break;
				case 8:
					valor = peso*35;
					imposto = valor*0.25;
					valor2 = valor+imposto;
					break;
				case 9:
					valor = peso*35;
					imposto = valor*0.25;
					valor2 = valor+imposto;
					break;
				case 10:
					valor = peso*35;
					imposto = valor*0.25;
					valor2 = valor+imposto;
					break;
				default:
					printf("Codigo invalido.");
					break;
			}
			break;
			
		default:
			printf("Codigo invalido.");
			break;
	}

	printf("Com um peso de %.1f gramas, o valor total do produto %d sera de %.2f, sendo  %.2f de impostos", peso, codigo, valor2, imposto);

	
}