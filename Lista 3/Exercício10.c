/*10) Faça um algoritmo que verifique se uma dada matriz quadrada 8×8 gerada
aleatoriamente com números de 0 até 14 é uma matriz triangular inferior. Em uma
matriz triangular inferior, todos os elementos acima da diagonal principal são iguais a 0.
Os demais elementos podem assumir quaisquer valores. Crie e utilize duas funções:
uma para a geração da matriz e outra para a verificação. De acordo com o retorno da
função de verificação, deve-se imprimir na função main: “MATRIZ TRIANGULAR
INFERIOR” ou “MATRIZ NAO TRIANGULAR INFERIOR”.*/
//Aluno Felipe Muros
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define EL 8

void gerar_mat (int matriz[][EL])
{
    int i,j;    
    srand(time(NULL));
    for (i=0;i<EL;i++)
        for (j=0;j<EL;j++)
            matriz[i][j]=rand()%15;    
}

int checa_mat (int mat[][EL])
{
    int i,j;
    for (i=0;i<EL;i++)
		for (j=i+1;j<EL;j++)
			if (mat[i][j]!=0)
                return 0;
    else return 1;
}

int main()
{
    int mat[EL][EL];    
    gerar_mat (mat);     
    if (checa_mat (mat)==1)
        printf ("\nMATRIZ TRIANGULAR INFERIOR");
    else printf ("\nMATRIZ NAO TRIANGULAR INFERIOR");
    return 0;
}