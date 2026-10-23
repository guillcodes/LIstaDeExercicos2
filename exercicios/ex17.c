/*
 * Aluno: Guilherme Candida de Amorim
 * Exercício: 17
 * Descrição: Lê e armazena o nome de 5 cidades numa matriz de caracteres.
 * Data: 22/10/2026
 */

#include <stdio.h>

int main() {
    char cidades[5][50];

    printf("Digite o nome de 5 cidades:\n");
    for (int i = 0; i < 5; i++) {
        printf("Cidade %d: ", i + 1);
        scanf("%s", cidades[i]);
    }

    printf("\nLista das cidades digitadas:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d. %s\n", i + 1, cidades[i]);
    }

    return 0;
}
