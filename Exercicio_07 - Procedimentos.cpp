#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

char a[50], i;

void receber(){
	printf("Digite a frase: ");
	gets(a);
}

void frase(){
	for(i=0; i<=50; i++){
	if(a[i] == 32){
	a[i]='\n';
	}
	}
	printf("%s", a);
}

int main(){
	receber();
	frase();
	return 0;
}

