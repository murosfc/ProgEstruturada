/*9) Faça um algoritmo que, dadas duas matrizes A e B de tamanho 10×10 geradas
aleatoriamente com números de 1 até 10, verifique se B é a inversa de A, isto é, se B é
igual a A-1. Se B for a inversa, a multiplicação A×B resulta em uma matriz identidade.
Crie e utilize três funções: uma para verificar se a matriz resultante de A×B é uma
matriz identidade, outra para a geração das matrizes e uma terceira para realizar a
multiplicação delas. De acordo com o retorno da função de verificação, deve-se
imprimir na função main: “B E INVERSA DE A” ou “B NAO E INVERSA DE A”.*/
//Aluno Felipe Muros
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define EL 10

void gerar_mat (int matriz[][EL])
{
    int i,j;    
    srand(time(NULL));
    for (i=0;i<EL;i++)
        for (j=0;j<EL;j++)
            matriz[i][j]=rand()%10 +1;    
}

int checa_mat (int mat[][EL])
{
    int i,j;
    for (i=0;i<EL;i++)
    {
        for (j=0;j<EL;j++)
        {
            if (i==j && mat[i][j] != 1)  
                return 0;
            else if (i!=j && mat[i][j] != 0)
                return 0;
        }
    }
    return 1;
}

void multiplica_mat (int matA[][EL],int matB[][EL],int matC[][EL])
{
    int i,j;
    for (i=0;i<EL;i++)
    {
        for (j=0;j<EL;j++)
        {
            matC[i][j]=matA[i][j]*matB[i][j];
        }
    }
}

int main()
{
    int matA[EL][EL],matB[EL][EL],matC[EL][EL];    
    gerar_mat (matA);
    gerar_mat (matB);
    multiplica_mat (matA,matB,matC);
    if (checa_mat (matC)==1)
        printf ("\nB E INVERSA DE A");
    else printf ("\nB NAO E INVERSA DE A");
    return 0;
}
