/*2) Faça um algoritmo para ler pelo teclado uma matriz 7×9 com valores reais e
imprimir quantos valores maiores do que 20 e menores ou iguais a 50 ela possui. Crie e
utilize duas funções: uma para a leitura da matriz e outra para fazer o cálculo. A
impressão do resultado deve ser na função main.
*/
//Aluno Felipe Muros
#include <stdio.h>

#define LN 7
#define CL 9

void ler_mat (float mat[][CL]);
int test (float mat[][CL]);

int main()
{
	float matriz[LN][CL];
	ler_mat (matriz);
	printf ("\nA matriz digitada possui %d elementos maiores do que 20 e menores ou iguais a 50\n",test (matriz));
	return 0;
}
void ler_mat (float mat[][CL])
{
	int i=0,j=0;
	printf ("\nDigite os valores da matriz %dX%d:\n",LN,CL);
	for (i=0;i<LN;i++)
		for (j=0;j<CL;j++)
		{	
			printf ("\nElemento[%d][%d]: ",i,j);
				scanf ("%f",&mat[i][j]);
		}
}	
int test (float mat[][CL])
{	
	int i=0,j=0,cont=0;
	for (i=0;i<LN;i++)
		for (j=0;j<CL;j++)
		{
			if (mat[i][j]>20 && mat[i][j]<=50)
				cont++;
		}
	return cont;
}
	
