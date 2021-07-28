/*3) Faça um algoritmo para ler pelo teclado uma matriz 5×5 com valores inteiros e
também um número inteiro x. Ao final, o algoritmo tem que imprimir se o número x
pertence ou não à matriz. O número x tem que ser lido na função main. Crie e utilize
duas funções: uma para a leitura da matriz e outra para realizar a busca. A impressão da
informação (se x está presente ou não na matriz) deve ser na função main.
*/
//Aluno Felipe Muros
#include <stdio.h>

#define ELEM 5

void ler_mat (int mat[][ELEM]);
int buscar_x_mat (int mat [][ELEM]), int x);

int main()
{
    int mat[ELEM][ELEM], x=0;
    ler_mat(mat);
    printf ("\nDigite o valor do elemento que desejas buscar na matriz: ");
    scanf ("%d",&x);
    if (buscar_x_mat(mat,x) == 1)
        printf ("\nO elemento %d esta presente na matriz\n\n");
    else printf ("\nO elemento %d nao esta presente na matriz\n\n");
    return 0;
}

void ler_mat (int mat[][ELEM])
{
	int i=0,j=0;
	printf ("\nDigite os valores da matriz %dX%d:\n",ELEM,ELEM);
	for (i=0;i<ELEM;i++)
		for (j=0;j<ELEM;j++)
		{	
			printf ("\nElemento[%d][%d]: ",i,j);
				scanf ("%d",&mat[i][j]);
		}
}	

int buscar_x_mat (int mat [][ELEM]), int x)
{
    int i,j;
    for (i=0;i<ELEM;i++)
    {
        for (j=0;j<ELEM;j++)
        {
            if (x == mat[i][j])
                return 1;
        }
    }
    return 0;   
}