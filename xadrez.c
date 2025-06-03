#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

void movimentoBispo(int casasBispo) {
    if(casasBispo > 0){
        movimentoBispo(casasBispo - 1);
        // Loop externo: controla as "linhas"
        for (int cima = 0; cima < 1; cima++) {
        // Loop interno: controla as "colunas" para cada linha
            for (int direita = 0; direita < 1; direita++) {
            printf("Cima, Direita\n");
        }
    }
        
    }
}
    movimentoTorre(int casasTorre){
    if(casasTorre > 0){
        movimentoTorre(casasTorre - 1);
        printf("Direita\n");
    }
}
    movimentoRainha(int casasRainha){
    if(casasRainha > 0){
        movimentoRainha(casasRainha - 1);
        printf("Esquerda\n");
    }
}

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    int torre = 5;
    int bispo = 5;
    int rainha = 8;
    int cavalo = 1;

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    // Bispo com estrutura recursiva com loop aninhado

    printf("Bispo\n");
    movimentoBispo(bispo);
    printf("\n");

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    printf("Torre\n");
    movimentoTorre(torre);
    printf("\n");

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    printf("Rainha\n");
    movimentoRainha(rainha);
    printf("\n");

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    printf("Cavalo\n");

    while (cavalo--)
    {
        for (int i = 0; i < 2; i++)
        {
            printf("cima\n");
        }
        printf("direita\n");
        printf("\n");
    }
    

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
