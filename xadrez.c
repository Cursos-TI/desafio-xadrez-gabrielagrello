#include <stdio.h>

int main()
{
    printf("DESAFIO XADREZ\n");
    printf("\n");

    printf("TORRE\n");
    for (int torre = 0; torre < 5; torre++) // Estrutura de Repetição FOR para movimentação da TORRE
    {
        printf("Direita\n");
    }
    printf("\n");

    int bispo = 0;

    printf("BISPO\n");
    while (bispo < 5) // Estrutura de Repetição WHILE para movimentação do BISPO
    {
        printf("Cima, Direita\n");
        bispo++;
    }
    printf("\n");

    int rainha = 0;

    printf("RAINHA\n");
    do // Estrutura de Repetição DO-WHILE para movimentação da RAINHA
    {
        printf("Esquerda\n");
        rainha++;

    } while (rainha < 8);

        return 0;
}
