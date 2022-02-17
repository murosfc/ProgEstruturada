/*9) Considere um vetor com 50 números inteiros gerados aleatoriamente de 1 a 200. Faça um algoritmo para
imprimir na tela a quantidade de números compostos presentes neste vetor. Crie e utilize três funções: uma
para preencher o vetor, outra para imprimir a quantidade de números compostos e a terceira para retornar 1,
se um número for composto, ou retornar 0, caso contrário.
Obs.: Um número natural é Composto quando ele tem mais do que dois divisores naturais distintos.
Exemplo: O número 6 é composto, pois tem como divisores os números 1, 2, 3 e 6*/
/*Aluno : Felipe Muros*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define TAM 50

void gerarvetor (int vet[])
{
    srand (time(NULL));
    int i;
    for (i=0;i<TAM;i++)
    {
        vet[i]=rand()%200 +1;
    }
}

int checacomposto (int n)
{
    int i; 
    //todo numero é divisivel por 1 e ele mesmo, logo basta apenas mais um divisor para ser composto
    for (i=2;i<n;i++) 
        if (n%i==0)
        {
            return 1;    
        }
    else return 0;        
}

void printcompostos (int vet[])
{
    int quantidadecompostos=0,i;
    for (i=0;i<TAM;i++)
        if (checacomposto(vet[i]) ==1)
            quantidadecompostos++;
    printf ("\nO vetor possui %d numeros compostos\n\n",quantidadecompostos);
}

int main()
{
    int vet[TAM];
    gerarvetor (vet);
    printcompostos (vet);
    return 0;
}