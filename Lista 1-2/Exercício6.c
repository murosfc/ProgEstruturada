/*6) Faça um algoritmo para ler uma palavra pelo teclado (com no máximo 15 caracteres) e verificar se ela é
Palíndrome ou não, sem utilizar qualquer estrutura de dados auxiliar. Crie e utilize uma função
para ler a palavra e uma função para fazer a verificação. A impressão da mensagem (se a palavra é ou não
Palíndrome) deve ser na função main.
Obs. 1: Uma palavra Palíndrome é aquela que lida de frente para trás e de trás para frente tem a mesma
sequência de caracteres. Exemplos: arara, ovo, asa, radar, matam, etc;
Obs. 2: Lembre-se que o usuário pode digitar letras maiúsculas e minúsculas.*/
/*Aluno : Felipe Muros*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define TAM 15

int testerpalindromo (char palavra[15])
{
    int j = strlen(palavra)-1, teste=0, i; 
    for (i=0;i<=j;i++)
    {   
        if (tolower(palavra[i]) == tolower(palavra[j]))
        {
            j--;                       
        }
        else 
        {
            teste++;
        }        
    }
    if (teste==0)
        return 1;
    else return 0;
}

char lerpalavra (char palavra[TAM])
{
    printf ("\nDigite a palavra: ");
    scanf ("%s",palavra);
}

int main()
{
    char palavra[TAM];
    lerpalavra(palavra);
    if (testerpalindromo(palavra) == 1)
        printf ("\nA palavra %s eh Palindrome",palavra);
    else printf ("\nA palavra %s nao eh Palindrome",palavra);
}