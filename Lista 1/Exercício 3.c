/*Faça um programa em C que leia duas notas, calcule a média e imprima a avaliação do aluno conforme critério abaixo:
Média < 5 ---> 'Fraco'
Media <= 6 ---> 'Regular'
Media <= 8 --> 'Bom'
Media > 8 ---> 'Excelente' */
#include <stdio.h>
#include <stdlib.h>

int main()
{
	float nota1,nota2;
	printf ("\nDigite a nota 1: ");
	scanf ("%f",&nota1);
	printf ("\nDigite a nota 2: ");
	scanf ("%f",&nota2);
	if ((nota1+nota2)/2 < 5)	
		printf ("\nCom media = %.2f o desempenho do aluno eh fraco\n\n",(nota1+nota2)/2);
	else if ((nota1+nota2)/2 <= 6)
		printf ("\nCom media = %.2f o desempenho do aluno eh regular\n\n",(nota1+nota2)/2);
	else if ((nota1+nota2)/2 <= 8)
		printf ("\nCom media = %.2f o desempenho do aluno eh bom\n\n",(nota1+nota2)/2);
	else printf ("\nCom media = %.2f o desempenho do aluno eh excelente\n\n",(nota1+nota2)/2);
	system ("pause");
	return 0;
}