/*1) Faça um algoritmo para verificar se um número real lido pelo teclado encontra-se ou não em um vetor com
30 números reais (também lido pelo teclado). Crie e utilize duas funções: uma para preencher o vetor e outra
para verificar se o número pertence ou não ao vetor. A impressão desta informação (se o número pertence ou
não ao vetor) deve ser na função main.*/
/*Aluno : Felipe Muros*/

#include <stdio.h>
#define TAM 30

void fillvet (float vet[])
{
    int i;
    printf ("Digite os elementos do vetor:\n");
    for (i=0;i<TAM;i++)
    {
        printf ("Posicao %d: ",i+1);
        scanf ("%f",&vet[i]);
    } 
}

int buscarvalor (float vet[], float num)
{
    int i;    
    for (i=0;i<TAM;i++)
        if (vet[i]==num)
            return 1;
    return 0;
}

int main ()
{
    float vetor[TAM], numeroChecar;
    fillvet (vetor);
    printf ("\nInforme o valor que deseja buscar no vetor: ");
    scanf ("%f",&numeroChecar);
    if (buscarvalor(vetor, numeroChecar) == 1)
        printf ("\nO valor %.2f pertence ao vetor",numeroChecar);
    else printf ("\nO valor %.2f nao pertence ao vetor",numeroChecar);
    return 0;
}

