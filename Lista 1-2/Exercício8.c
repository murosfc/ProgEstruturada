/*8) Considere um vetor com 50 números inteiros lidos pelo teclado. Faça um algoritmo que imprima o segundo
maior número presente no vetor. Crie e utilize duas funções: uma para preencher o vetor e outro para imprimir
o segundo maior número.
Obs. 1: Não é permitido utilizar qualquer estrutura de dados auxiliar.
Obs. 2: Não é permitido ordenar o vetor.*/
/*Aluno : Felipe Muros*/

#include <stdio.h>

#define TAM 50

void fillvet (int vet[])
{
    int i;
    printf ("Digite os elementos do vetor:\n");
    for (i=0;i<TAM;i++)
    {
        printf ("Posicao %d: ",i+1);
        scanf ("%d",&vet[i]);
    } 
}

void segundomaior (int vet[])
{
    int buscado=0,maior=vet[0], i;
    for (i = 1; i < TAM; i++)
    {
        if (vet[i]>maior)
            maior=vet[i];
    }
    for (i = 0; i < TAM; i++)
    {
        if (vet[i]<maior && vet[i]>buscado)
            buscado=vet[i];
    }
    printf ("\nSegundo maior numero do vetor = %d\n",buscado);    
}

int main ()
{
    int vetor[TAM];
    fillvet (vetor);
    segundomaior (vetor);
    return 0;
}