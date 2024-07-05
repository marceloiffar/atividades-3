/*6. Escreva um programa que receba dois valores inteiros e mostre uma mensagem na tela
informando se os números são múltiplos ou não.*/

#include <stdio.h>
int main() {
	int n1, n2;
	
	printf("digite um numero");
	scanf("%d", &n1);
	printf("digite um numero");
	scanf("%d", &n2);
	
	if( n1 % n2 == 0 || n2 % n2 == 0){
		printf("os numeros %d e %d sao multiplos.", n1, n2);
	} else{
		printf("os numeros %d e %d nao sao multiplos.", n1, n2);
	}
}
