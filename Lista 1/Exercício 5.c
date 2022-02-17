/*5. Faça um programa C que leia dois números e imprima se são iguais ou diferentes. Caso sejam diferentes, imprima o maior deles.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num1,num2;
	printf ("\nDigite primeiro numero: ");
	scanf ("%d",&num1);
	printf ("\nDigite o segundo numero: ");
	scanf ("%d",&num2);
	if (num1>num2)
		printf ("\n%d eh diferente e maior que %d\n\n",num1,num2);
	else if (num1 == num2)
		printf ("\nOs numeros digitados sao iguais!\n\n");
	else printf ("\n%d eh diferente e maior que %d\n\n",num2,num1);
	system ("pause");
	return 0;
}