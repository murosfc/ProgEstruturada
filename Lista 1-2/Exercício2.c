/*2) Faça um algoritmo para ler (pelo teclado) um vetor com 15 elementos inteiros e depois inverter este mesmo
vetor, sem utilizar um vetor auxiliar. Crie e utilize três funções: uma para preencher o vetor, outra para
invertê-lo e a terceira para imprimi-lo após a inversão.
Obs.: O objetivo deste exercício não é imprimir o vetor em ordem inversa, mas sim colocar os elementos
dentro do vetor em ordem inversa.*/
/*Aluno : Felipe Muros*/

#include <stdio.h>

#define TAM 15

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

void printvetor (int vet[])
{
    int i;    
    for (i=0;i<TAM;i++)
        printf ("%d ",vet[i]);
}

void invertervetor (int vet[])
{
    int i=0, j=TAM-1, auxiliar;
    for (i=0;i<=j;i++)
    {
        auxiliar=vet[i];
        vet[i]=vet[j];
        vet[j]=auxiliar;
        j--;
    }
}

int main ()
{
    int vetor[TAM];
    fillvet (vetor);
    printf ("\nVetor inicial: ");
    printvetor (vetor);
    invertervetor (vetor);
    printf ("\nVetor invertido: ");
    printvetor (vetor);
    return 0;
}