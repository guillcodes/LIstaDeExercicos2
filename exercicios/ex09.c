/*
 * Aluno: Guilherme Candida de Amorim
 * Exercício: 09
 * Descrição: Desenha um triângulo retângulo de asteriscos com a base fornecida.
 * Data: 21/10/2026
 */

#include <stdio.h>

int main() {
    int base;

    printf("Digite o tamanho da base do triangulo: ");
    scanf("%d", &base);

    printf("\n");
    for (int i = 1; i <= base; i++) {
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
