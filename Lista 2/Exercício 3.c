/*Faça um programa na linguagem C que leia o nome, o telefone, os três últimos salários e exibe a seguintes informações:
 Media dos Salários.
 Maior Salario.
 Menor Salario.
*/
#include <stdio.h>
#include <stdlib.h>

int main ()
{
	char nome[50], tel[15];
	float sal1, sal2, sal3;
	printf ("\nEntre com os dados do funcionario: ");
	printf ("\nDigite o nome: ");
	scanf ("%s",nome);
	printf ("\nDigite o telefone: ");
	scanf ("%s",tel);
	printf ("\nDigite os tres ultimos salarios: ");
	printf ("\nSalario 1: ");
	scanf ("%f",&sal1);
	printf ("\nSalario 2: ");
	scanf ("%f",&sal2);
	printf ("\nSalario 3: ");
	scanf ("%f",&sal3);
	printf ("\n\nMedia dos salarios: $ %.2f", (sal1+sal2+sal3)/3);
	printf ("\nMaior salario: $ ");
	if (sal1>sal2 && sal1>sal3)
		printf ("%.2f\n",sal1);
	else if (sal2>sal3)
		printf ("%.2f\n",sal2);
	else printf ("%.2f",sal3);	
	printf ("\nMenor salario: $ ");
	if (sal1<sal2 && sal1<sal3)
		printf ("%.2f\n",sal1);
	else if (sal2<sal3)
		printf ("%.2f\n",sal2);
	else ("%.2f\n",sal3);
	system ("pause");
	return 0;
}