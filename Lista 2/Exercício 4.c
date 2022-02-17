/*Faça um programa na linguagem C que leia os dados da ficha de matricula de um novo aluno conforme abaixo:
 Nome.
 Idade (18 a 99 anos).
 Grau de Instrução (1 – 2o grau, 2 – Superior, 3 – Pós-graduado).
 Código do curso (1 – Ciência da Computação, 2 – Engenharia, 3 – Matemática, 4 – Marketing e 5 – Direito ).
 Valor da mensalidade.
 Percentual de desconto (0 a 100).
Com base nestas informações calcule a mensalidade com desconto e exiba as informações abaixo:
 Valor da Mensalidade com Desconto.
 Nome do Curso.
 Situação do Aluno (Aluno Especial ou Aluno Comum).*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	char nome[20];
	int ginstru, cdgcurso=7, situacao=2, idade=100;
	float mensalidade, desconto=101;
	printf ("\nDigite os dados do aluno:");
	printf ("\nNome: ");
	scanf ("%s",nome);	
	while (idade<=18 || idade>=99)
	{
		printf ("\nDigite a idade (18 a 99 anos): ");
		scanf ("%d",&idade);
	}	
	printf ("\nGrau de Instrucaoo:\n1 - 2o grau;\n2 - Ensino Superior;\n3 - Pos-graduado.\n");
	scanf ("%d",&ginstru);
	while (cdgcurso<0 || cdgcurso>6)
	{
		printf ("\nCodigo do curso:\n1 - Ciencia da Computacao;\n2 - Engenharia;\n3 - Matematica;\n4 - Marketing;\n5 - Direito\n");
		scanf ("%d",&cdgcurso);
	}
	printf ("\nDigite o valor da mensalidade: ");
	scanf ("%f",&mensalidade);
	while (desconto<=0 || desconto >= 100)
	{
		printf ("\nPercentual de desconto (0 a 100): ");
		scanf ("%f",&desconto);
	}
	desconto = desconto/100;	
	while (situacao<0 || situacao>1)
	{
		printf ("Situacao do aluno: \n0 - Aluno Especial;\n1 - Aluno Comum.\n");
		scanf ("%d",&situacao);
	}
	printf ("\n\nAluno: %s ",nome);
	printf ("matriculado no curso ");
	switch (cdgcurso)
	{
		case 1:
		printf ("Ciencia da Computacao");
		break;
		
		case 2:
		printf ("Engenharia");
		break;
		
		case 3:
		printf ("Matematica");
		break;
		
		case 4:
		printf ("Marketing");
		break;
		
		case 5:
		printf ("Direito");
		break;
		
		default:
		printf ("Curso invalido");		
	}	
	printf (" valor da mensalidade com desconto %.2f ",mensalidade*(1-desconto));
	if (situacao==1)
		printf ("classificado como aluno comum\n\n");
	else printf ("classificado como aluno especial\n\n"); 
	system ("pause");
	return 0;
}