/*
 * Aluno: Guilherme Candida de Amorim
 * Exercício: 05
 * Descrição: Imprime os números de 10 a 1 usando laço while e depois laço for.
 * Data: 21/10/2026
 */

#include <stdio.h>

int main() {
    printf("Impressao com 'while':\n");
    int i = 10;
    while (i >= 1) {
        printf("%d ", i);
        i--;
    }

    printf("\n\nImpressao com 'for':\n");
    for (int j = 10; j >= 1; j--) {
        printf("%d ", j);
    }
    printf("\n");

    return 0;
}
