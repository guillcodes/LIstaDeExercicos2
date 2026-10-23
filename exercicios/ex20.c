/*
 * Aluno: Guilherme Candida de Amorim
 * Exercício: 20
 * Descrição: Alocação dinâmica de memória para N elementos inteiros com malloc.
 * Data: 22/10/2026
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int N;

    printf("Digite o tamanho N do array: ");
    scanf("%d", &N);

    int *arr = (int*) malloc(N * sizeof(int));
    if (arr == NULL) {
        printf("Erro de alocacao de memoria!\n");
        return 1;
    }

    for (int i = 0; i < N; i++) {
        arr[i] = (i + 1) * 10;
    }

    printf("\nArray alocado dinamicamente:\n");
    for (int i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr);
    return 0;
}
