/*
 * Aluno: Guilherme Candida de Amorim
 * Exercício: 14
 * Descrição: Ordenação de um vetor de 5 números com o algoritmo Bubble Sort.
 * Data: 22/10/2026
 */

#include <stdio.h>

int main() {
    int arr[5], temp;

    printf("Digite 5 numeros:\n");
    for (int i = 0; i < 5; i++) scanf("%d", &arr[i]);

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("\nArray ordenado em ordem crescente:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
