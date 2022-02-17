/*Faça um programa em C que leia duas notas, calcule e imprima a média aritmética.*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
	float nota1,nota2;
	printf ("\nDigite a nota 1: ");
	scanf ("%f",&nota1);
	printf ("\nDigite a nota 2: ");
	scanf ("%f",&nota2);
	printf ("\nMedia = %.2f\n\n",(nota1+nota2)/2);
	system ("pause");
	return 0;
}