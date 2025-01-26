#include<stdio.h>

int main(){
	float n1,n2,s1,s2,s3,s4;
	printf("digite um numero\n");
	scanf("%f",&n1);	
	printf("digite outro numero\n");
	scanf("%f",&n2);
	s1=n1+n2;
	s2=n1-n2;
	s3=n1*n2;
	s4=n1/n2;
	printf("a soma dos numeros eh %f \na diferenca eh %f \no produto e %f \ne a razao e %f",s1,s2,s3,s4);
}

