/*4) Faça um algoritmo para preencher um vetor (de tamanho 30) com elementos gerados aleatoriamente de 1 a
100, de maneira que não sejam inseridos números iguais no vetor. Ou seja, todos os números contidos no vetor
têm que ser distintos. Crie e utilize duas funções: uma para preencher o vetor e outra para imprimi-lo.*/
/*Aluno : Felipe Muros*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define TAM 30

void gerarvetor (int vet[])
{
    srand (time(NULL));
    int i,j, aux,controle;
    for (i=0;i<TAM;i++)
    {
       do
       {
            controle=0;
            aux=rand()%100+1;
            for (j=i;j>=0;j--)
            {
                if (vet[j]==aux)
                {
                    controle++;
                }                
            }
            if (controle==0)
                vet[i]=aux;       
       } 
       while (controle !=0);      
    }
}

void printvetor (int vet[])
{
    int i;    
    for (i=0;i<TAM;i++)
        printf ("%d ",vet[i]);
}

int main ()
{
    int vetor[TAM];
    gerarvetor (vetor);
    printf ("\nVetor gerado: ");
    printvetor (vetor);
    printf ("\n\n");
    return 0;
}
