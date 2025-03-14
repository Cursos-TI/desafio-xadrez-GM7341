#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    //declaração de variáveis
    int casaB = 1, casaT = 1, casaC2 = 1;

    //Repetição do Bispo
    printf("Movimentação do bispo: \n");
    while (casaB <= 5)
    {
        printf("\nDireita");
        printf("\nCima");
        casaB++;
    }

    //Repetição da Torre
    printf("\n\nMovimentação da Torre: \n");
    do
    {
        printf("\nDireita");
        casaT++;
    } while (casaT <= 5);

    //Repetição da Rainha
    printf("\n\nMovimentação da Rainha: \n");
    for (int casaR = 1; casaR <= 8; casaR++)
    {
        printf("\nEsquerda");
    }
    
    //Movimentação do Cavalo
    printf("\n\nMovimentação do Cavalo: \n");
    for (int casaC = 0; casaC <= 1; casaC++)
    {
        while (casaC2 >= 0)
        {
            printf("Baixo\n");
            casaC2--;
        }
        printf("Esquerda\n");
        casaC++;
        
    }
    

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
