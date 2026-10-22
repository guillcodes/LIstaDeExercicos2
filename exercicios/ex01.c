/*
 * Aluno: Guilherme Candida de Amorim
 * Exercício: 01
 * Descrição: Lê um número N e calcula a soma de 1 a N usando um laço for.
 * Data: 21/10/2026
 */

#include <stdio.h>

int main() {
    int N;
    long long soma = 0;

    printf("Digite um numero inteiro N: ");
    if (scanf("%d", &N) != 1 || N <= 0) {
        printf("Numero invalido!\n");
        return 1;
    }

    for (int i = 1; i <= N; i++) {
        soma += i;
    }

    printf("A soma de 1 ate %d e: %lld\n", N, soma);

    return 0;
}