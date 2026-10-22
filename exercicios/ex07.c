/*
 * Aluno: Guilherme Candida de Amorim
 * Exercício: 07
 * Descrição: Imprime as potências de 2 menores que 1000 usando laço for.
 * Data: 21/10/2026
 */

#include <stdio.h>

int main() {
    printf("=== POTÊNCIAS DE 2 MENORES QUE 1000 ===\n");

    for (int pot = 1; pot < 1000; pot *= 2) {
        printf("%d ", pot);
    }
    printf("\n");

    return 0;
}
