/*
 * Aluno: Guilherme Candida de Amorim
 * Exercício: 03
 * Descrição: Determina se um número é primo utilizando um laço for e uma flag.
 * Data: 21/10/2026
 */

#include <stdio.h>

int main() {
    int num, ehPrimo = 1;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    if (num <= 1) {
        ehPrimo = 0;
    } else {
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                ehPrimo = 0;
                break;
            }
        }
    }

    if (ehPrimo) {
        printf("O numero %d E primo.\n", num);
    } else {
        printf("O numero %d NAO e primo.\n", num);
    }

    return 0;
}