/*Faça um programa em C que leia duas notas, calcule a média e imprima a situação do aluno (Aprovado, Reprovado).
 Considere que a média para aprovação é 5.0.*/
 
#include <stdio.h>
#include <stdlib.h>

int main()
{
	float nota1,nota2;
	printf ("\nDigite a nota 1: ");
	scanf ("%f",&nota1);
	printf ("\nDigite a nota 2: ");
	scanf ("%f",&nota2);
	if ((nota1+nota2)/2 >= 5)	
		printf ("\nCom media = %.2f a sitacao do aluno eh Aprovado\n\n",(nota1+nota2)/2);
	else 
		printf ("\nCom media = %.2f a sitacao do aluno eh Reprovado\n\n",(nota1+nota2)/2);
	system ("pause");
	return 0;
}