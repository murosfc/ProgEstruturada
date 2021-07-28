/*7) Faça um algoritmo para calcular e imprimir a matriz transposta de uma matriz 4×9
gerada aleatoriamente com números de 1 até 25. Crie e utilize três funções: uma para a
geração da matriz, outra para calcular a transposta e uma terceira para imprimir a matriz
transposta.*/
//Aluno Felipe Muros
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LN 4
#define CL 9

void print_transp (int mat[][LN])
{
    int i=0,j=0;	
	for (i=0;i<CL;i++)
    {
		for (j=0;j<LN;j++)
            printf ("%d\t",mat[i][j]);
        if (j == LN)
        {            
            printf ("\n");
        } 
    }   
}

void gerar_mat (int matriz[][CL])
{
    int i,j;    
    srand(time(NULL));
    for (i=0;i<LN;i++)
        for (j=0;j<CL;j++)
            matriz[i][j]=rand()%25 +1;    
}

void transpor_mat (int matriz[][CL], int transposta[][LN])
{
    int i,j;
    for (i=0;i<LN;i++)
        for (j=0;j<CL;j++) 
            transposta[j][i]=matriz[i][j];
}

int main()
{
    int matriz[LN][CL], transposta[CL][LN];
    gerar_mat(matriz);
    transpor_mat (matriz, transposta);
    printf ("\nMatriz transposta:\n");
    print_transp (transposta);
    return 0;
}