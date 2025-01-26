#include <stdio.h>

int main(void)
{

	int estado, carga;
	float peso, imposto, valor1, valor2;
	

	printf("Digite o codigo do estado, o peso em ton e o codigo da carga:\n");
	scanf("%d %f %d",&estado, &peso, &carga);

	peso = peso*1000;

	switch(estado)
	{
		case 1:
			if (carga >= 10 && carga <= 20)
			{
				valor1 = peso * 100;
				imposto = valor1 * 0.35;
				valor2 = valor1 + imposto;
				printf("Com um peso de %.1f kg, o valor total do caminhao com o produto %d sera de %.2f, sendo  %.2f de impostos", peso, carga, valor2, imposto);
			}
			if (carga >= 21 && carga <= 30)
			{
				valor1 = peso * 250;
				imposto = valor1 * 0.35;
				valor2 = valor1 + imposto;
				printf("Com um peso de %.1f kg, o valor total do caminhao com o produto %d sera de %.2f, sendo  %.2f de impostos", peso, carga, valor2, imposto);
			}
			if (carga >= 31 && carga <= 40)
			{
				valor1 = peso * 340;
				imposto = valor1 * 0.35;
				valor2 = valor1 + imposto;
				printf("Com um peso de %.1f kg, o valor total do caminhao com o produto %d sera de %.2f, sendo  %.2f de impostos", peso, carga, valor2, imposto);
			}
			else if (carga > 40 || carga < 10)
			{
				printf("Codigo invalido1");
			}
			break;
		
		case 2:
			if (carga >= 10 && carga <= 20)
			{
				valor1 = peso * 100;
				imposto = valor1 * 0.25;
				valor2 = valor1 + imposto;
				printf("Com um peso de %.1f kg, o valor total do caminhao com o produto %d sera de %.2f, sendo  %.2f de impostos", peso, carga, valor2, imposto);
			}
			if (carga >= 21 && carga <= 30)
			{
				valor1 = peso * 250;
				imposto = valor1 * 0.25;
				valor2 = valor1 + imposto;
				printf("Com um peso de %.1f kg, o valor total do caminhao com o produto %d sera de %.2f, sendo  %.2f de impostos", peso, carga, valor2, imposto);
			}
			if (carga >= 31 && carga <= 40)
			{
				valor1 = peso * 340;
				imposto = valor1 * 0.25;
				valor2 = valor1 + imposto;
				printf("Com um peso de %.1f kg, o valor total do caminhao com o produto %d sera de %.2f, sendo  %.2f de impostos", peso, carga, valor2, imposto);
			}
			else if (carga > 40 || carga < 10)
			{
				printf("Codigo invalido2");
			}
			break;
		
		case 3:
			if (carga >= 10 && carga <= 20)
			{
				valor1 = peso * 100;
				imposto = valor1 * 0.15;
				valor2 = valor1 + imposto;
				printf("Com um peso de %.1f kg, o valor total do caminhao com o produto %d sera de %.2f, sendo  %.2f de impostos", peso, carga, valor2, imposto);
			}
			if (carga >= 21 && carga <= 30)
			{
				valor1 = peso * 250;
				imposto = valor1 * 0.15;
				valor2 = valor1 + imposto;
				printf("Com um peso de %.1f kg, o valor total do caminhao com o produto %d sera de %.2f, sendo  %.2f de impostos", peso, carga, valor2, imposto);
			}
			if (carga >= 31 && carga <= 40)
			{
				valor1 = peso * 340;
				imposto = valor1 * 0.15;
				valor2 = valor1 + imposto;
				printf("Com um peso de %.1f kg, o valor total do caminhao com o produto %d sera de %.2f, sendo  %.2f de impostos", peso, carga, valor2, imposto);
			}
			else if (carga > 40 || carga < 10)
			{
				printf("Codigo invalido3");
			}
			break;
		
		case 4:
			if (carga >= 10 && carga <= 20)
			{
				valor1 = peso * 100;
				imposto = valor1 * 0.5;
				valor2 = valor1 + imposto;
				printf("Com um peso de %.1f kg, o valor total do caminhao com o produto %d sera de %.2f, sendo  %.2f de impostos", peso, carga, valor2, imposto);
			}
			if (carga >= 21 && carga <= 30)
			{
				valor1 = peso * 250;
				imposto = valor1 * 0.5;
				valor2 = valor1 + imposto;
				printf("Com um peso de %.1f kg, o valor total do caminhao com o produto %d sera de %.2f, sendo  %.2f de impostos", peso, carga, valor2, imposto);
			}
			if (carga >= 31 && carga <= 40)
			{
				valor1 = peso * 340;
				imposto = valor1 * 0.5;
				valor2 = valor1 + imposto;
				printf("Com um peso de %.1f kg, o valor total do caminhao com o produto %d sera de %.2f, sendo  %.2f de impostos", peso, carga, valor2, imposto);
			}
			else if (carga > 40 || carga < 10)
			{
				printf("Codigo invalido4");
			}
			break;
		
		case 5:
			if (carga >= 10 && carga <= 20)
			{
				valor1 = peso * 100;
				imposto = 0;
				valor2 = valor1 + imposto;
				printf("Com um peso de %.1f kg, o valor total do caminhao com o produto %d sera de %.2f, sendo  %.2f de impostos", peso, carga, valor2, imposto);
			}
			if (carga >= 21 && carga <= 30)
			{
				valor1 = peso * 250;
				imposto = 0;
				valor2 = valor1 + imposto;
				printf("Com um peso de %.1f kg, o valor total do caminhao com o produto %d sera de %.2f, sendo  %.2f de impostos", peso, carga, valor2, imposto);
			}
			if (carga >= 31 && carga <= 40)
			{
				valor1 = peso * 340;
				imposto = 0;
				valor2 = valor1 + imposto;
				printf("Com um peso de %.1f kg, o valor total do caminhao com o produto %d sera de %.2f, sendo  %.2f de impostos", peso, carga, valor2, imposto);
			}
			else if (carga > 40 || carga < 10)
			{
				printf("Codigo invalido5");
			}
			break;
		
		default:
			printf("Codigo invalido6");
			break;
	}



	
}