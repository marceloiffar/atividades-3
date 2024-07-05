/*Suponha que o conceito de um aluno seja determinado em função de sua nota. Crie um algoritmo
que receba duas notas de um aluno, calcule e apresente a média e o conceito conforme a tabela
abaixo:
Nota Conceito
0 a 4,9 Insuficiente
5,0 a 6,4 Regular
6,5 a 8,4 Bom
8,5 a 10,0 Ótimo*/

#include <stdio.h>

int main()                    {
	
	float n1, n2, media;
	
	printf("digite a nota");
	scanf("%f", &n1);
	printf("digite a nota");
	scanf("%f", &n2);
	
	media = (n1 + n2) / 2,0;
	
	   if (media >= 0.0 && media <= 4.9) {
        printf("media: %.1f Conceito: insuficiente", media);
    } else if (media >= 5.0 && media <= 6.4) {
        printf("media: %.1f Conceito: regular", media);
    } else if (media >= 6.5 && media <= 8.4) {
        printf("media: %.1f Conceito: bom", media);
    } else if (media >= 8.5 && media <= 10.0) {
        printf("media: %.1f Conceito: otimo", media);
   
    }
}
