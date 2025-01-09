#include <stdio.h>
#include <math.h>

int main(){
	float salario1,aumento,salario2;
	printf("digite seu salario atual");
	scanf("%f",&salario1);
	aumento=salario1*0.25;
	salario2=salario1+aumento;
	printf("com um aumento de %f seu novo salario sera de %f",aumento,salario2);
}


