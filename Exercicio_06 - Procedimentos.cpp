#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int a[100], indice;

void preenchimento(){
	for (indice=0; indice<100; indice++){
	a[indice]=rand() %100;
	}
}

void exibicao(){
	printf("Numeros maiores que 80 auto preenchidos");
	for (indice=0; indice<100; indice++){
	if(a[indice] > 80){
		printf ("\n%i", a[indice]);
	}
}
}

int main(){
	preenchimento();
	exibicao();
	return 0;
}

