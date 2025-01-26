#include <stdio.h>

int main()
{


	int menu, menu2;
	float input, output;
		
	printf("Escolha um tipo de conversao:\n1: Temperatura\n2: Distancia\n3: Tempo\n");
	scanf("%d",&menu);

//




	switch (menu)
	{
		default: // DIGITAR ERRADO O TIPO DE CONVERSAO //
			printf("Opcao invalida.");
			break;
		case 1: // TEMPERATURA MENU

			printf("Selecione uma unidade de origem:\n1: Celsius\n2. Fahrenheit\n3. Kelvin\n");
			scanf("%d",&menu);

			printf("Selecione uma unidade de destino:\n1: Celsius\n2. Fahrenheit\n3. Kelvin\n");
			scanf("%d",&menu2);

			/*
			colocar scanf para o valor de temperatura entrada e saida aqui?
			algumas linhas a menos no codigo,
			mas a mensagem de erro so aparece depois de inserir os valores
			*/

			switch(menu) // UNIDADE ENTRADA
			{
				default: // ERRO UNIDADE DE ENTRADA
					printf("Opcao invalida.");
					break;
				case 1: // ENTRADA CELSIUS

					switch(menu2) // UNIDADE SAIDA
					{
						default: // ERRO UNIDADE SAIDA
							printf("Opcao invalida.");
							break;
						case 1: // SAIDA CELSIUS
							
							printf("Digite uma temperatura em Celsius:\n");
							scanf("%f",&input);

							output = input;

							printf("%.1f graus Celsius = %.1f graus Celsius.",input, output);

							break;

						case 2: // SAIDA FAHRENHEIT
							
							printf("Digite uma temperatura em Celsius:\n");
							scanf("%f",&input);

							output =  (input*9/5)+32;

							printf("%.1f graus Celsius = %.1f graus Fahrenheit.",input, output);

							break;
						case 3: // SAIDA KELVIN

							printf("Digite uma temperatura em Celsius:\n");
							scanf("%f",&input);

							output =  input + 273;

							printf("%.1f graus Celsius = %.1f graus Kelvin.",input, output);

							break;
					}					
					break;

				case 2: // ENTRADA FAHRENHEIT

					switch(menu2)
					{
						default:
							printf("Opcao invalida.");
							break;
						case 1: // SAIDA CELSIUS
							
							printf("Digite uma temperatura em Fahrenheit:\n");
							scanf("%f",&input);

							output = ((input-32)*5)/9;

							printf("%.1f graus Fahrenheit = %.1f graus Celsius.",input, output);

							break;

						case 2: // SAIDA FAHRENHEIT
							
							printf("Digite uma temperatura em Fahrenheit:\n");
							scanf("%f",&input);

							output = input;

							printf("%.1f graus Fahrenheit = %.1f graus Fahrenheit.",input, output);

							break;
						case 3: // SAIDA KELVIN

							printf("Digite uma temperatura em Fahrenheit:\n");
							scanf("%f",&input);

							output =  ((input-32)*5)/9 + 273;

							printf("%.1f graus Fahrenheit = %.1f graus Kelvin.",input, output);

							break;
					}
					break;

				case 3: // ENTRADA KELVIN

					switch(menu2)
					{
						default:
							printf("Opcao invalida.");
							break;
						case 1: // SAIDA CELSIUS
							
							printf("Digite uma temperatura em Kelvin:\n");
							scanf("%f",&input);

							output = input - 273;

							printf("%.1f graus Kelvin = %.1f graus Celsius.",input, output);

							break;

						case 2: // SAIDA FAHRENHEIT
							
							printf("Digite uma temperatura em Kelvin:\n");
							scanf("%f",&input);

							output = ((input-273)*9/5)+32;

							printf("%.1f graus Kelvin = %.1f graus Fahrenheit.",input, output);

							break;

						case 3: // SAIDA KELVIN

							printf("Digite uma temperatura em Kelvin:\n");
							scanf("%f",&input);

							output =  input; ((input-32)*5)/9 + 273;

							printf("%.1f graus Kelvin = %.1f graus Kelvin.",input, output);

							break;
					}
					break;

			}
			break;
		
		case 2: // DISTANCIA MENU

			printf("Selecione uma unidade de origem:\n1: Metros\n2. Kilometros\n3. Milhas\n");
			scanf("%d",&menu);

			printf("Selecione uma unidade de destino:\n1: Metros\n2. Kilometros\n3. Milhas\n");
			scanf("%d",&menu2);

			/* 
			colocar scanf de valores de entrada antes do switch
			menos linhas de codigo? quantas a menos?	
			*/
			
			printf("Digite um valor de entrada:\n");
			scanf("%f",&input);

			switch (menu) // UNIDADE ENTRADA
			{
				default:
					printf("Opcao invalida.\n");
					break;

				case 1: // ENTRADA METROS

					switch(menu2) // UNIDADE SAIDA
					{
						default:
							printf("Opcao invalida.\n");
							break;
						case 1: // SAIDA METROS

							output = input;

							printf("%.3f Metros = %.3f Metros ",input, output);

							break;
						case 2: // SAIDA KM

							output = input/1000;
							printf("%.3f Metros = %.3f Kilometros ",input, output);
							break;
						case 3: // SAIDA MILHAS

							output = input/1600;

							printf("%.3f Metros = %.3f Milhas ",input, output);

							break;
					}

					break;
				case 2: // ENTRADA KM

					switch(menu2) // UNIDADE SAIDA
					{
						default:
							printf("Opcao invalida.\n");
							break;
						case 1: // SAIDA METROS

							output = input*1000;

							printf("%.3f Kilometros = %.3f Metros ",input, output);

							break;
						case 2: // SAIDA KM

							output = input;

							printf("%.3f Kilometros = %.3f Kilometros ",input, output);
							break;
						case 3: // SAIDA MILHAS

							output = input/1.6;

							printf("%.3f Kilometros = %.3f Milhas ",input, output);

							break;
					}

					break;
				case 3: // ENTRADA MILHAS

					switch(menu2) // UNIDADE SAIDA
					{
						default:
							printf("Opcao invalida.\n");
							break;
						case 1: // SAIDA METROS

							output = input*1600;

							printf("%.3f Milhas = %.3f Metros ",input, output);

							break;
						case 2: // SAIDA KM

							output = input*1.6;

							printf("%.3f Milhas = %.3f Kilometros ",input, output);
							break;
						case 3: // SAIDA MILHAS

							output = input;

							printf("%.3f Milhas = %.3f Milhas ",input, output);

							break;
					}
					break;

			/* 
			colocar a mensagem com o resultado fora do switch? 
			menos linhas, quantas? 
			mensagem fica mais personalizavel quando a resposta esta dentro do switch
			*/

			}

			break;

		case 3: // MENU TEMPO

			printf("Selecione uma unidade de origem:\n1: Horas\n2. Minutos\n3. Segundos\n");
			scanf("%d",&menu);

			printf("Selecione uma unidade de destino:\n1: Horas\n2. Minutos\n3. Segundos\n");
			scanf("%d",&menu2);

			printf("Digite um valor de entrada:\n");
			scanf("%f",&input);

			switch (menu) // UNIDADE ENTRADA
			{
				default:
					printf("Opcao invalida.\n");
					break;
				case 1: // ENTRADA HORAS
						
						switch (menu2) // UNIDADE SAIDA
						{
							default:
								printf("Opcao invalida.\n");
								break;	
							case 1: // SAIDA HORAS

								output = input;
								printf("%.2f horas = %.2f horas",input,output);

								break;	
							case 2: // SAIDA MIN

								output = input*60;
								printf("%.2f horas = %.2f minutos",input,output);

								break;	
							case 3: // SAIDA SEG

								output = input*3600;
								printf("%.2f horas = %.2f segundos",input,output);

								break;	
						}

					break;
				case 2: // ENTRADA MIN

					switch (menu2) // UNIDADE SAIDA
						{
							default:
								printf("Opcao invalida.\n");
								break;	
							case 1: // SAIDA HORAS

								output = input/60;
								printf("%.2f minutos = %.2f horas",input,output);

								break;	
							case 2: // SAIDA MIN

								output = input;
								printf("%.2f minutos = %.2f minutos",input,output);

								break;	
							case 3: // SAIDA SEG

								output = input*60;
								printf("%.2f minutos = %.2f segundos",input,output);

								break;	
						}

					break;
				case 3: // ENTRADA SEG

					switch (menu2) // UNIDADE SAIDA
						{
							default:
								printf("Opcao invalida.\n");
								break;	
							case 1: // SAIDA HORAS

								output = input/3600;
								printf("%.1f segundos = %.2f horas",input,output);

								break;	
							case 2: // SAIDA MIN

								output = input/60;
								printf("%.2f segundos = %.2f minutos",input,output);

								break;	
							case 3: // SAIDA SEG

								output = input;
								printf("%.2f segundos = %.2f segundos",input,output);

								break;	
						}
					break;
			}
			break;
	}
}