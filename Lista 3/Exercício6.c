/*6) Faça um algoritmo para verificar se uma matriz quadrada 10×10 gerada
aleatoriamente com números de 1 até 50 é simétrica. Crie e utilize duas funções: uma
para a geração da matriz e outra para a verificação. De acordo com o retorno da função
de verificação, deve-se imprimir na função main: “MATRIZ SIMETRICA” ou
“MATRIZ NAO SIMETRICA”.*/
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
            matriz[i][j]=rand()%50 + 1;    
}

int checa_mat (int mat[][EL])
{
    int i,j;
    for (i=0;i<EL;i++)
    {
        for (j=0;j<EL;j++)
        {
            if (mat[i][j] != mat[j][i])  
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
        printf ("\nMATRIZ SIMETRICA");
    else printf ("\nMATRIZ NAO SIMETRICA");
    return 0;
}
