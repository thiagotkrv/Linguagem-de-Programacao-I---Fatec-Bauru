#include<stdio.h>
#include<math.h>

void idade(int idade){
	if(idade > 4 && idade < 8){
		printf("Infantil A");
	}
	if(idade > 7 && idade < 11){
		printf("Infantil B");
	}
	if(idade > 10 && idade < 14){
		printf("Juvenil A");
	}
	if(idade > 13 && idade < 18){
		printf("Juvenil B");
	}
	if(idade >= 18){
		printf("Adulto");
	}
}

main(){
	int i;
	printf ("[] Classificacao de Categoria []");
	printf ("\nDigite a idade: ");
	scanf("%i", &i);
	idade(i);
}

