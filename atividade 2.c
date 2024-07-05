/*2. Faça um programa que leia 3 números inteiros, verifique se e eles são diferentes e os imprima em
ordem crescente. Caso dois ou mais números sejam iguais, apresente uma mensagem adequada
ao usuário.*/

#include <stdio.h>

int main()
{
	int n1, n2, n3;
	
	printf("digite 3 valores inteiro diferentes");
	scanf("%d %d %d", &n1, &n2, &n3 );
	
	if(n1 != n2 && n1 != n3 && n2 != n3) {
		int menor, meio, maior;
		
		if (n1 < n2 && n1 < n3) {
            menor = n1;
            if (n2 < n3) {
                meio = n2;
                maior = n3;
            } else {
                meio = n3;
                maior = n2;
            }
        } else if (n2 < n1 && n2 < n3) {
            menor = n2;
            if (n1 < n3) {
                meio = n1;
                maior = n3;
            } else {
                meio = n3;
                maior = n1;
            }
        } else {
            menor = n3;
            if (n1 < n2) {
                meio = n1;
                maior = n2;
            } else {
                meio = n2;
                maior = n1;
            }

}
	printf("numeros em ordem decresente %d, %d, %d", menor, meio, maior );
	} else
	 {
		printf("tem dois numeros iguais e nao e possivel ordenar");
	}

}
