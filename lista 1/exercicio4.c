#include <stdio.h>
#include <math.h>

int main(){
	float x1,x2,y1,y2,d;
	printf("Digite as coordenadas x/y do ponto 1");
	scanf("%f%f",&x1,&y1);
	printf("Digite as coordenadas x/y do ponto 2");
	scanf("%f%f",&x2,&y2);
	d=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
	printf("A distancia eh %f",d);
}