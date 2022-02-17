/*Faça um programa na linguagem C que leia o nome, sexo e ano de nascimento de uma pessoa e exibe as seguintes informações:
 Idade da pessoa
 Classificação Etária da pessoa, de acordo com o seguinte critério:
o Idade até 25 anos – Jovem Adulto.
o Idade até 45 anos – Adultos.
o Idade até 55 anos – Adulto Experiente.
o Idade até 65 anos – Adultos Sênior.
o Idade > 65 – Vovô – Se o sexo = 'M' ou 'm' /Vovó – Se o sexo = 'F' ou 'f'.*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> #converte caixas alta para baixa e vice versa
#include <locale.h> #imprime com acentos

#define ano_atual 2021

int main ()
{
	char nome[50],sexo;
	int ano;
	setlocale(LC_ALL,"");
	printf ("\nDigite o nome da pessoa: ");
	scanf ("%s",&nome);
	printf ("\nDigite o sexo 'm' para Masculino ou 'f' para feminino: ");
	scanf ("%s",&sexo);
	sexo = tolower(sexo);	
	printf ("\nDigite o ano de nascimento: ");
	scanf ("%d",&ano);
	printf ("\nClassificacao Et�ria da pessoa: ");
	if ((ano_atual-ano)<25)
		printf ("Jovem Adulto\n");
	else if ((ano_atual-ano)<45)
		printf ("Adulto\n");
	else if ((ano_atual-ano)<55)
		printf ("Adulto Experiente\n");
	else if ((ano_atual-ano)<65)
		printf ("Adultos S�nior\n");
	else if (sexo=='f')
		printf ("Vov�\n\n");
	else if (sexo=='m')
		printf ("Vov�\n\n");
	else printf ("\nO sexo informado � indefinido\n\n");
	system ("pause");
	return 0;		
}	
