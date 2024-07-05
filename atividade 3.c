/*3. Construa um programa em C que receba 3 valores X, Y e Z reais e mostre uma mensagem na tela
informando se a soma entre X e Y é menor, maior ou igual a Z.*/

#include <stdio.h>

  int main()     {

  	float x, y, z;
  	float soma;
  	
  	printf("digite um numero");
  	scanf("%f", &x);
  	printf("digite um numero");
  	scanf("%f", &y);
  	printf("digite mais um numero");
  	scanf("%f", &z);
  	
  	soma = x + y;
  	
  	if( soma < z){
  		printf("a soma de x e y e menor que z");
	  } else if(soma > z) {
	  printf("a soma de x e y a maior que z");
	  }else {
	  	printf("a soma de x e y e igual a z");
	  }
  }
