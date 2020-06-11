#include<stdio.h>
#include<math.h>

void bissexto(int ano){
	if((ano%4 == 0) && (ano%100 != 0)){
		printf("Ano Bissexto");
	}
	else if(ano%400 == 0){
		printf("Ano Bissexto");
	}
	else {
		printf("Nao e Bissexto");
	}
}

main(){
	int a;
	printf ("[] Bissexto ou nao? []");
	printf ("\nDigite o ano: ");
	scanf("%i", &a);
	bissexto(a);
}
