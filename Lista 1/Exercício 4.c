/* 4 - Faça um programa C que leia três números e imprima o maior deles.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num1,num2,num3;
	printf ("\nDigite primeiro numero: ");
	scanf ("%d",&num1);
	printf ("\nDigite o segundo numero: ");
	scanf ("%d",&num2);
	printf ("\nDigite o terceiro numero: ");
	scanf ("%d",&num3);
	if (num1>num2 && num1>num3)
		printf ("\nMaior numero digitado: %d\n\n",num1);
	else if (num2 > num3)
		printf ("\nMaior numero digitado: %d\n\n",num2);
	else printf ("\nMaior numero digitado: %d\n\n",num3);
	system ("pause");
	return 0;
}