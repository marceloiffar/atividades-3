/*7. Uma lanchonete em FW deseja informatizar o seu sistema de pedidos. Escreva um programa que
leia o código do item pedido, calcule o valor a ser pago e apresente o valor total do lanche.
Considere que apenas um tipo de lanche pode ser pedido por vez. Use uma estrutura de caso para
apresentar o menu.
Código Lanche Preço
10 Xis Completo R$ 12,00
11 Xis Bacon R$ 16,50
12 Xis de Coração de boi R$ 14,00
13 Xis de Charque R$ 14,50
14 Xis de Ovelha R$ 20,90
15 Xis de linguiça campeira R$ 18,00
*/
#include <stdio.h>
int main()       {
	
	int cod;
	float preco;
	
	printf("codigo lanche                  preco");
	printf("10      xis completo             R$ 12,00");
	printf("11      xis bacon                R$ 16,50");
	printf("12      xis de coraçao de boi    R$ 14,00");
	printf("13      xis de charque           R$ 14,50");
	printf("14      xis de ovelha            R$ 20,90");
	printf("15		xis de linguiça campera  R$ 18,00");
	
	printf("digite o cod do lanche desejado");
	scanf("%d", &cod);
	
	preco=0,0;
	
	switch(cod){
		case 10:
			preco= 12,00;
			printf("vc escolheu o xis completo. valor a pagar: R$ %.2f", preco);
	 	break;
		case 11:
			preco= 16,50;
			printf("voce escolheu o xis bacon. o valor a pagar e: R$ %.2f", preco);
			break;
		case 12:
			preco= 14,00;
			printf(" voce escolheu o xis coraçao de boi. o valor a pagar e: R$ %.2f", preco);
			break;
		case 13:
			preco= 14,50;
			printf(" voce escolheu o xis charque. valor a pagar: R$ %.2f", preco);
			break;
		case 14:
			preco= 20,90;
			printf("vc escolheu o xis de ovelha. o valor a pagar e: R$ %.2f", preco);
			break;
		case 15:
			preco= 18,00;
			printf("vc escolheu o xis linguica campeira. valor a pagar e: R$ %.2f", preco);
			break;
		default:
				printf("codigo invalido por favor escolha um codigo valido");
				return 1;
				
			
				
				
		
	}
	return 0;
}
