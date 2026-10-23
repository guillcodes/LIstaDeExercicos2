/*
 * Aluno: Guilherme Candida de Amorim
 * Exercício: 19
 * Descrição: Conta a frequência dos números de 0 a 9 num vetor de 15 posições.
 * Data: 22/10/2026
 */

#include <stdio.h>

int main() {
    int nums[15], freq[10] = {0};

    printf("Digite 15 numeros (entre 0 e 9):\n");
    for (int i = 0; i < 15; i++) {
        scanf("%d", &nums[i]);
        if (nums[i] >= 0 && nums[i] <= 9) {
            freq[nums[i]]++;
        }
    }

    printf("\nFrequencia dos numeros:\n");
    for (int i = 0; i < 10; i++) {
        printf("O numero %d apareceu %d vez(es).\n", i, freq[i]);
    }

    return 0;
}
