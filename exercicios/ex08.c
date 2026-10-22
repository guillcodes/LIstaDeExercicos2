/*
 * Aluno: Guilherme Candida de Amorim
 * Exercício: 08
 * Descrição: Desenha um retângulo de asteriscos com altura e largura fornecidas.
 * Data: 21/10/2026
 */

#include <stdio.h>

int main() {
    int altura, largura;

    printf("Digite a largura do retangulo: ");
    scanf("%d", &largura);
    printf("Digite a altura do retangulo: ");
    scanf("%d", &altura);

    printf("\n");
    for (int i = 0; i < altura; i++) {
        for (int j = 0; j < largura; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
