/*1. Faça um programa na linguagem C que leia o nome, idade, sexo e a mensalidade de dois 
alunos e exiba as seguintes informações:
? Quem é o mais velho?
? Quem paga a mensalidade mais barata?
? Informe "HOMEM" quando o sexo for 'm'; e "MULHER" quando o sexo for 'f'
*/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{	
	int idade1, idade2;
	char sexo1,sexo2,nome1[30],nome2[30];
	float mensalidade1,mensalidade2;
			
	printf ("\nDigite o nome do aluno 1: ");
	scanf ("%s",&nome1);
	printf ("\nDigite a idade do aluno 1: ");
	scanf ("%d",&idade1);
	printf ("\nDigite o sexo do aluno 1: (m ou f)\n");
	scanf ("%s",&sexo1);
	sexo1 = tolower(sexo1);
	if (sexo1 == 'f')
		printf ("\nA Aluna %s eh MULHER", nome1);
	else if (sexo1 == 'm')
		printf ("\nO aluno %s eh HOMEM",nome1);
	else printf ("\nSexo nao identificado\n");	
	printf ("\n\nDigite o valor da mensalidade do aluno 1: ");
	scanf ("%f",&mensalidade1);	
	printf ("\nDigite o nome do aluno 2: ");
	scanf ("%s",&nome2);
	printf ("\nDigite a idade do aluno 2: ");
	scanf ("%d",&idade2);
	printf ("\nDigite o sexo do aluno 2: (m ou f)\n");
	scanf ("%s",&sexo2);
	sexo1 = tolower(sexo2);
	if (sexo2 == 'f')
		printf ("\nA Aluna %s eh MULHER", nome2);
	else if (sexo2 == 'm')
		printf ("\nO aluno %s eh HOMEM",nome2);
	else printf ("\nSexo nao identificado\n");	
	printf ("\nDigite o valor da mensalidade do aluno 2: ");
	scanf ("%f",&mensalidade2);
	if (idade1 > idade2)
		printf ("\nO(A) Aluno(a) %s eh mais velho(a)",nome1);
	else printf ("\nO(A) Aluno(a) %s eh mais velho(a)",nome2);
	if (mensalidade1 < mensalidade2)
		printf ("\nO(A) Aluno(a) %s paga a mensalidade mais barata\n\n",nome1);
	else printf ("\nO(A) Aluno(a) %s paga a mensalidade mais barata\n\n",nome2);	
	return 0;
}