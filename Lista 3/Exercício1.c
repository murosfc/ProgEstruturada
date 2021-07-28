/*1) Faça um algoritmo para ler pelo teclado uma matriz 5×4 com valores reais e
imprimir o maior valor presente na matriz e a sua posição (linha e coluna). Crie e utilize
duas funções: uma para a leitura da matriz e outra para imprimir as informações
*/
//Aluno: Felipe Muros

#include <stdio.h>

void ler_mat (float mat[][4]);
void print (float mat[][4]);

int main()
{
	float matriz[5][4];
	ler_mat (matriz);
	print (matriz);
	return 0;
}
void ler_mat (float mat[][3])
{
	int i=0,j=0;
	printf ("\nDigite os valores da matriz 5X4:\n");
	for (i=0;i<4;i++)
		for (j=0;j<3;j++)
		{	
		printf ("\nElemento[%d][%d]: ",i,j);
			scanf ("%f",&mat[i][j]);
		}
}
void print (float mat[][3])
{
	int i=0,j=0,iaux=0,jaux=0;
	for (i=0;i<4;i++)
		for (j=0;j<3;j++)
			if (mat[i][j]>mat[iaux][jaux])
			{
				iaux=i;
				jaux=j;
			}
	printf ("\nMaior elemento da Matriz: %.2f que esta na linha %d, coluna %d",mat[iaux][jaux],iaux,jaux);
}