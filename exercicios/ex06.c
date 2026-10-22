/*
 * Aluno: Guilherme Candida de Amorim
 * Exercício: 06
 * Descrição: Solicita um número positivo e repete enquanto for <= 0 (while).
 * Data: 21/10/2026
 */

#include <stdio.h>

int main() {
    int num = 0;

    printf("Digite um numero estritamente positivo (> 0): ");
    scanf("%d", &num);

    while (num <= 0) {
        printf("Entrada invalida! O numero deve ser maior que zero. Tente novamente: ");
        scanf("%d", &num);
    }

    printf("\nNumero valido digitado: %d\n", num);

    return 0;
}
