/*1. Escreva um programa em C que receba um n�mero inteiro e imprima na tela �F1�, �F2� ou �F3�,
conforme as condi��es abaixo:
a) F1 se n <= 10
b) F2 se n > 10 e n <= 100
c) F3 se n > 100*/
#include <stdio.h>

int main() {
	
	int n;
	
	printf("digite um numero inteiro");
	scanf("%f",&n);
	
	if( n <= 10) {
		printf("f1");
	} else if( n > 10 && n <= 100){
		printf("f2");
	} else if( n > 100) {
		printf("f3");
	} else { 
	printf("esse numero e invalido");
	}
}
