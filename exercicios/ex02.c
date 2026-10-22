/*
 * Aluno: Guilherme Candida de Amorim
 * Exercício: 02
 * Descrição: Lê as idades de 10 pessoas e calcula a média usando um laço for.
 * Data: 21/10/2026
 */

#include <stdio.h>

int main() {
    int idade;
    int somaIdades = 0;

    printf("Digite a idade de 10 pessoas:\n");
    for (int i = 1; i <= 10; i++) {
        printf("Pessoa %d: ", i);
        scanf("%d", &idade);
        somaIdades += idade;
    }

    float media = (float)somaIdades / 10.0f;
    printf("\nA media das idades e: %.2f anos\n", media);

    return 0;
}