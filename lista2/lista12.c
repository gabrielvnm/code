#include <stdio.h>

int main(void)
{
	int h1, m1, h2, m2, h3, m3;

	printf("Digite o horario de inicio:\nHoras: ");
	scanf("%d",&h1);
	printf("Minutos: ");
	scanf("%d",&m1);

	printf("Digite o horario de termino:\nHoras: ");
	scanf("%d",&h2);
	printf("Minutos:");
	scanf("%d",&m2);

	if (h1>h2)
	{
		if (m1<m2)
		{
		h3 = h2-h1+24;
		m3 = m2-m1;
		}

		else 
		{
			h3 = h2-h1+23;
			m3 = m2-m1+60;
		}
	}
	else if (m1<m2)
	{
		h3 = h2-h1;
		m3 = m2-m1;
	}
	else
	{
		h3 = h2-h1-1;
		m3 = m2-m1+60;
	}
	if (m3 == 60)
	{
		h3 = h3+1;
		m3 = 0;
	}
	if (m3 == 0 && h3 == 0)
	{
		h3 = 24;
		m3 = 0;
	}

	printf("A duracao do jogo foi de %d horas e %d minutos.",h3,m3);

	
}