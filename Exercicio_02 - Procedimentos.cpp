#include<stdio.h>
#include<math.h>

void raio(float raio){
	float volume;
	volume=(1.33*3.14*pow(raio,3));
	printf("O Volume da circunferencia e: %.3f", volume);
}

main(){
	float r;
	printf ("[] Calculo de Volume []");
	printf ("\nDigite o raio: ");
	scanf("%f", &r);
	raio(r);
}

