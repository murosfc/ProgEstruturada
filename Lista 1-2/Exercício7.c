/*7) Considere um vetor com 100 números lidos pelo teclado. Faça um algoritmo para ler pelo teclado (na função
main) um número inteiro n (1 = n = 100) e imprimir todos os números que aparecem no vetor exatamente n
vezes. Caso nenhum número apareça exatamente n vezes no vetor, esta informação deve ser impressa. Crie e
utilize duas funções: uma para preencher o vetor e outra para imprimir o que se pede. Exemplo com um vetor
de 10 números e n = 2:
Vetor: {3, 1, 9, 8, 3, 10, 1, 5, 9, 1}
Números que aparecem exatamente 2 vezes: 3, 9
Obs.: Não é permitido ordenar o vetor.*/
/*Aluno : Felipe Muros*/

#include <stdio.h>

#define TAM 100

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

void buscarnovetor (int vet[TAM], int n)
{
    int i,j,controle, conta=0;
    printf ("Numeros que aparecem exatamente %d vezes:  ",n);
    for (i=0;i<TAM;i++)
    {
        controle=0;        
        for (j=0;j<TAM;j++)
        {
            if (vet[i]==vet[j] && i!=j)
            {
                if (i>j) //numero já avaliado não deve contar novamente
                {
                    controle=n+1;
                }
                else controle ++;
            }
        }
        if (controle+1 == n)
        {
            printf ("%d, ",vet[i]);
            conta++;
        }            
    }
    if (conta ==0)
    {
        for (i=0;i<44;i++) //apga a frase anterior
            printf ("\b");
        for (i=0;i<44;i++)
            printf (" ");
        printf("\nNao ha numeros que aparecam %d vezes no vetor",n);
    }  
    else printf ("\b\b  ");
}

int main ()
{
    int n=0, vetor[TAM];
    fillvet (vetor);
    do
    {
        printf ("\nDigite um numero (1 = n = 100)\n");
        scanf ("%d",&n);
    } while (n<1 && n>100);
    buscarnovetor (vetor, n);
    return 0;
}

