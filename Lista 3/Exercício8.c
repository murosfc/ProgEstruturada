/*8) Faça um algoritmo para verificar se uma dada matriz quadrada 15×15 gerada
aleatoriamente com números de 0 até 19 é uma matriz identidade. Crie e utilize duas
funções: uma para a geração da matriz e outra para a verificação. De acordo com o
retorno da função de verificação, deve-se imprimir na função main: “MATRIZ
IDENTIDADE” ou “MATRIZ NAO E IDENTIDADE”.*/
//Aluno Felipe Muros
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define EL 15

void gerar_mat (int matriz[][EL])
{
    int i,j;    
    srand(time(NULL));
    for (i=0;i<EL;i++)
        for (j=0;j<EL;j++)
            matriz[i][j]=rand()%20;    
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

int main()
{
    int matriz[EL][EL];
    gerar_mat (matriz);
    if (checa_mat (matriz)==1)
        printf ("\nMATRIZ IDENTIDADE");
    else printf ("\nMATRIZ NAO E IDENTIDADE");
    return 0;
}
