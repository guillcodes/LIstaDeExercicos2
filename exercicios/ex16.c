/*
 * Aluno: Guilherme Candida de Amorim
 * Exercício: 16
 * Descrição: Calcula a soma dos elementos da diagonal principal de uma matriz 3x3.
 * Data: 22/10/2026
 */

#include <stdio.h>

int main() {
    int matriz[3][3], somaDiagonal = 0;

    printf("Digite os elementos da matriz 3x3:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
            if (i == j) {
                somaDiagonal += matriz[i][j];
            }
        }
    }

    printf("\nSoma da diagonal principal: %d\n", somaDiagonal);

    return 0;
}
