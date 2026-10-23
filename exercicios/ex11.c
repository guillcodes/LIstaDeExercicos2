/*
 * Aluno: Guilherme Candida de Amorim
 * Exercício: 11
 * Descrição: Preenche um vetor de 10 posições com números aleatórios (rand()) e exibe-os.
 * Data: 22/10/2026
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int vetor[10];
    srand(time(NULL));

    printf("Preenchendo o array com numeros aleatorios:\n");
    for (int i = 0; i < 10; i++) {
        vetor[i] = rand() % 100;
        printf("vetor[%d] = %d\n", i, vetor[i]);
    }

    return 0;
}
