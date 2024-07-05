/*5. Faça um programa em C que leia dois números reais e indique se são iguais ou diferentes. Mostre
o Maior e o menor respectivamente*/

#include <stdio.h>

int main() {
	
	float n1, n2;
	
	printf("digite um numero");
	scanf("%f", &n1);
	printf("digite um numero");
	scanf("%f", &n2);
	
	if(n1 == n2){
		printf("os numeros sao iguais.");
	} else {
		printf("os numeros sao diferentes.");
	}
	if(n1 > n2) {
		printf("o maior numero e %.2f e o menos mumero e %.2f.", n1);
	} else{
		printf("o maior numeor e %.2f e o menor numero e %.2f",n2);
	}
} 
