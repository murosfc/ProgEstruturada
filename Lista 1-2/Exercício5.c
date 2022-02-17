/*5) Faça um algoritmo que leia pelo teclado os 30 números de um vetor do tipo float e imprima na tela o maior
e o menor elementos deste vetor e a posição em que eles se encontram. Crie e utilize duas funções: uma para
preencher o vetor e outra para imprimir as informações.
Obs.: Caso o maior e o menor elementos apareçam mais de uma vez no vetor, a posição a ser impressa é a
do último maior e menor elementos.*/
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

void maiormenor (float vet[])
{
    int posicaomaior=0,posicaomenor=0,i;
    float menor=vet[0],maior=vet[0];
    for (i=1;i<TAM;i++)
    {
        if (vet[i]>maior)
        {
            maior=vet[i];
            posicaomaior=i;
        }           
        if (vet[i]<menor)
        {
            menor=vet[i];
            posicaomenor=i;
        }
    }
    printf ("\nMaior valor %.2f na posicao %d do vetor", maior, posicaomaior);
    printf ("\nMenor valor %.2f na posicao %d do vetor", menor, posicaomenor);
}

int main ()
{
    float vetor[TAM];
    fillvet (vetor);
    maiormenor (vetor);
    return 0;
}

