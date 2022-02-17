/*6. Faça um programa C que leia três números e os imprima ordenadamente, isto é, primeiro, segundo, terceiro.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num1,num2,num3, aux;	
	printf ("\nDigite primeiro numero: ");
	scanf ("%d",&num1);
	printf ("\nDigite o segundo numero: ");
	scanf ("%d",&num2);
	printf ("\nDigite o terceiro numero: ");
	scanf ("%d",&num3);
	printf ("\nNumeros digitados em ordem crescente: ");
	if (num1> num3 || num2> num3)
		if (num1> num2)
		{
			aux=num1;
			num1=num3;
			num3=aux;
		}
		else{
			aux=num2;
			num2=num3;
			num3=aux;
		}
	if (num2 < num1)
		{
			aux=num1;
			num1=num2;
			num2=aux;
		}
	printf ("%d, %d, %d\n\n",num1,num2,num3);
	system ("pause");
	return 0;
}	
	
	

	
	