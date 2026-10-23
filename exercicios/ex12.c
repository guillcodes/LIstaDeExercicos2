/*
 * Aluno: Guilherme Candida de Amorim
 * Exercício: 12
 * Descrição: Lê dois vetores de 5 elementos e calcula a soma elemento a elemento.
 * Data: 22/10/2026
 */

#include <stdio.h>

int main() {
    int a[5], b[5], soma[5];

    printf("Digite 5 numeros para o primeiro vetor:\n");
    for (int i = 0; i < 5; i++) scanf("%d", &a[i]);

    printf("Digite 5 numeros para o segundo vetor:\n");
    for (int i = 0; i < 5; i++) scanf("%d", &b[i]);

    printf("\nVetor Soma (A + B):\n");
    for (int i = 0; i < 5; i++) {
        soma[i] = a[i] + b[i];
        printf("soma[%d] = %d\n", i, soma[i]);
    }

    return 0;
}
