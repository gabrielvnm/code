#include <stdio.h>
#include <math.h>

int main(){
	float A,B,C,d,x,x2;
	printf("digite os coeficientes A B e C");
	scanf("%f %f %f",&A,&B,&C);
	d=B*B-(4*A*C);
	x=(-B+(sqrt(d)))/2*A;
	x2=(-B-(sqrt(d)))/2*A;
	printf("As raizes da equacao sao %f e %f",x,x2);
}