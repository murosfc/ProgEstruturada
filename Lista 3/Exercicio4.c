/*4) Faça um algoritmo para ler pelo teclado duas matrizes de números reais 5×3 e
imprimir a soma dessas matrizes. Crie e utilize três funções: uma para a leitura das
matrizes, outra para calcular a soma e uma terceira para imprimir a matriz com o
resultado da soma. */
//Aluno Felipe Muros
#include <stdio.h>

#define LN 5
#define CL 3

void print_mat (float mat[][CL]);
void somar_matrizes (float matA[][CL], float matB[][CL], float matC[][CL]);
void ler_mat (float mat[][CL]);

int main()
{
    float matA[LN][CL],matB[LN][CL],matC[LN][CL];
    ler_mat(matA);
    ler_mat(matB);
    somar_matrizes(matA,matB,matC);
    printf ("\nSoma das Matrizes A+B = \n");
    print_mat (matC);
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

void somar_matrizes (float matA[][CL], float matB[][CL], float matC[][CL])
{
    int i=0,j=0;
    for (i=0;i<LN;i++)    
		for (j=0;j<CL;j++)
        {
            matC[i][j] = matA[i][j]+matB[i][j];
        }   
}

void print_mat (float mat[][CL])
{
    int i=0,j=0;	
	for (i=0;i<LN;i++)
    {
		for (j=0;j<CL;j++)
            printf ("%.2f  ",mat[i][j]);
        if (j == CL)
        {            
            printf ("\n");
        } 
    }   
}