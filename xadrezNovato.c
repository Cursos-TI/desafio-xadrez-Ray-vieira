#include <stdio.h>

// Desafio de Xadrez - Nível Novato
// Autora: Rayanne Vieira
// Objetivo: Simular movimentação de peças usando estruturas de repetição

// Constantes para movimentos
#define MOV_BISPO 5
#define MOV_TORRE 5
#define MOV_RAINHA 8

void moverBispo() {
    printf("\nMovimentação do Bispo (diagonal superior direita):\n");
    for (int i = 0; i < MOV_BISPO; i++) {
        printf("Cima\n");
        printf("Direita\n");
    }
}

void moverTorre() {
    printf("\nMovimentação da Torre (5 casas para a direita):\n");
    int i = 0;
    while (i < MOV_TORRE) {
        printf("Direita\n");
        i++;
    }
}

void moverRainha() {
    printf("\nMovimentação da Rainha (8 casas para a esquerda):\n");
    int i = 0;
    do {
        printf("Esquerda\n");
        i++;
    } while (i < MOV_RAINHA);
}

int main() {
    moverBispo();
    moverTorre();
    moverRainha();
    return 0;
}
