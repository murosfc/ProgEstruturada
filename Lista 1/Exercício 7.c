/*7. Faça um programa C que leia os três lados de um triangulo e verifique se é um triangulo e de que tipo (equilátero, isósceles, escaleno).*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	float L1,L2,L3,aux;	
	printf ("\nDigite o lado 1 do triangulo: ");
	scanf ("%f",&L1);
	printf ("\nDigite o lado 2 do triangulo: ");
	scanf ("%f",&L2);
	printf ("\nDigite o lado 3 do triangulo: ");
	scanf ("%f",&L3);
	if (L1==L2 && L1==L3)
		printf ("\nO triangulo eh equilatero\n\n");
	else if (L1!=L2 && L1!=L3 && L2!=L3)
		printf ("\nO triangulo eh escaleno\n\n");
	else printf ("\nO triangulo eh isosceles\n\n");
	system ("pause");
	return 0;
}