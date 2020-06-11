#include<stdio.h>

void subtracao(float a, float b){
	float sub;
	sub=a-b;
	printf ("Resultado e : %.2f", sub);
}

main(){
	float x, y;
	printf ("[] Subtracao []");
	printf ("\nDigite o 1o numero: ");
	scanf("%f", &x);
	printf ("Digite o 2o numero: ");
	scanf("%f", &y);
	subtracao(x,y);
}

