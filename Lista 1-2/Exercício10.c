/*10) Considere um vetor com 100 números inteiros gerados aleatoriamente de 1 a 500. Faça um algoritmo para
imprimir na tela a quantidade de números perfeitos presentes neste vetor. Crie e utilize três funções: uma
para preencher o vetor, outra para imprimir a quantidade de números perfeitos e a terceira para retornar 1, se
um número for perfeito, ou retornar 0, caso contrário.
Obs.: Um número inteiro positivo é chamado de Perfeito se a soma dos seus divisores naturais distintos for
igual ao próprio número, sem considerar o número como o seu próprio divisor.
Ex.: O número 6 é chamado de P, pois a soma dos seus divisores (1, 2 e 3) é igual a ele mesmo (1+2+3=6).*/
/*Aluno : Felipe Muros*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define TAM 100

void gerarvetor (int vet[])
{
    srand (time(NULL));
    int i;
    for (i=0;i<TAM;i++)
    {
        vet[i]=rand()%500 +1;
    }
}

int checaperfeito (int n)
{
    int i, somadivisores=1;    
    for (i=2;i<n;i++) 
        if (n%i==0)
        {
            somadivisores+=i;    
        }
    if (somadivisores == n) 
        return 1;
    else return 0;
}

void printperfeitos (int vet[])
{
    int quantidadeperfeitos=0,i;
    for (i=0;i<TAM;i++)
        if (checaperfeito(vet[i]) ==1)
            quantidadeperfeitos++;
    printf ("\nO vetor possui %d numeros perfeitos\n\n",quantidadeperfeitos);
}

int main()
{
    int vet[TAM];
    gerarvetor (vet);
    printperfeitos (vet);
    return 0;
}