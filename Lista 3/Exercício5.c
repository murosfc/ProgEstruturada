/*5) Faça um algoritmo para imprimir o resultado da multiplicação de um número lido
pelo teclado (lido na função main) por uma matriz de inteiros 5×15 gerada
aleatoriamente com números de 0 até 29. Crie e utilize três funções: uma para a geração
da matriz, outra para calcular a multiplicação e uma terceira para imprimir a matriz com
o resultado da multiplicação*/
//Aluno Felipe Muros
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LN 5
#define CL 15

void print_mat (int mat[][CL])
{
    int i=0,j=0;	
	for (i=0;i<LN;i++)
    {
		for (j=0;j<CL;j++)
            printf ("%d\t",mat[i][j]);
        if (j == CL)
        {            
            printf ("\n");
        } 
    }   
}

void multplica_mat_num (int mat[][CL], int num)
{
    int i,j;
    for (i=0;i<LN;i++)
        for (j=0;j<CL;j++)
            mat[i][j]=mat[i][j]*num;
}

void gerar_mat (int matriz[][CL])
{
    int i,j;    
    srand(time(NULL));
    for (i=0;i<LN;i++)
        for (j=0;j<CL;j++)
            matriz[i][j]=rand()%30;    
}

int main()
{
    int matriz[LN][CL], mult;
    gerar_mat(matriz);
    printf ("\nDigite um numero para multiplicar os elementos da matriz: \n");
    scanf ("%d",&mult);
    multplica_mat_num (matriz,mult);
    printf ("\nMatriz gerada multiplicada por %d:\n",mult);
    print_mat (matriz);
    return 0;
}
