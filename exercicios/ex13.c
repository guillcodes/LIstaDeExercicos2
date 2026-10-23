/*
 * Aluno: Guilherme Candida de Amorim
 * Exercício: 13
 * Descrição: Busca linear de uma chave num vetor de 10 posições.
 * Data: 22/10/2026
 */

#include <stdio.h>

int main() {
    int vetor[10], chave, encontrado = 0;

    printf("Digite 10 numeros inteiros:\n");
    for (int i = 0; i < 10; i++) scanf("%d", &vetor[i]);

    printf("Digite a chave de busca: ");
    scanf("%d", &chave);

    for (int i = 0; i < 10; i++) {
        if (vetor[i] == chave) {
            printf("Chave %d ENCONTRADA no indice %d!\n", chave, i);
            encontrado = 1;
            break;
        }
    }

    if (!encontrado) {
        printf("Chave %d NAO foi encontrada no array.\n", chave);
    }

    return 0;
}
