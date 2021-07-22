/*3) Considere um vetor com 40 números inteiros positivos gerados aleatoriamente de 1 a 100. Faça um algoritmo
para verificar o número de vezes que um número inteiro positivo n lido pelo teclado aparece neste vetor. O
programa também deve informar em quais posições (índices) do vetor o número aparece, caso ele pertença ao
vetor. Crie e utilize duas funções: uma para preencher o vetor e outra para realizar a verificação.
Obs. 1: O seu programa deve verificar primeiro quantas vezes o número n aparece no vetor. Depois, se ele
aparecer alguma vez no vetor, imprimir as posições que ele aparece. Se ele não pertencer ao vetor, seu programa
deve imprimir: "Número não pertence ao vetor".*/
/*Aluno : Felipe Muros*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define TAM 40

void gerarvetor (int vet[])
{
    srand (time(NULL));
    int i;
    for (i=0;i<TAM;i++)
    {
        vet[i]=rand()%100 +1;
    }
}

void verificarvetor (int vet[], int num)
{
    int controle=0, i;
    for (i=0;i<TAM;i++)
        if (vet[i]==num)
            controle++;
    if (controle >= 1)
    {
        printf ("\nValor %d encontrado no vetor na(s) posicao(oes): ",num);
        for (i=0;i<TAM;i++)
            if (vet[i]==num)
                printf ("%d ",i+1);
    }
    else printf ("\nNúmero %d não pertence ao vetor", num);        
}

int main ()
{
    int vetor[TAM], numeroProcurar;
    gerarvetor (vetor);    
    printf ("\nDigite o numero que deseja buscar no vetor:\n");
    scanf ("%d",&numeroProcurar);
    verificarvetor (vetor, numeroProcurar);

    return 0;
}