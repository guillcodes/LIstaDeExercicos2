/*
 * Aluno: Guilherme Candida de Amorim
 * Exercício: 18
 * Descrição: Copia dados de um vetor para outro sem usar bibliotecas adicionais.
 * Data: 22/10/2026
 */

#include <stdio.h>

int main() {
    int origem[5] = {10, 20, 30, 40, 50};
    int destino[5];

    for (int i = 0; i < 5; i++) {
        destino[i] = origem[i];
    }

    printf("Conteudo copiado para o array de destino:\n");
    for (int i = 0; i < 5; i++) {
        printf("destino[%d] = %d\n", i, destino[i]);
    }

    return 0;
}
