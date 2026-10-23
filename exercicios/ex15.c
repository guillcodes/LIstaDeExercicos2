/*
 * Aluno: Guilherme Candida de Amorim
 * Exercício: 15
 * Descrição: Lê uma matriz 2x3 e guarda a soma de cada linha num vetor de 2 posições.
 * Data: 22/10/2026
 */

#include <stdio.h>

int main() {
    int matriz[2][3], somaLinhas[2] = {0, 0};

    printf("Digite os elementos da matriz 2x3:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
            somaLinhas[i] += matriz[i][j];
        }
    }

    printf("\nSoma de cada linha:\n");
    for (int i = 0; i < 2; i++) {
        printf("Soma da linha %d: %d\n", i, somaLinhas[i]);
    }

    return 0;
}
