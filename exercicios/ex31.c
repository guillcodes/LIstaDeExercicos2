/*
 * Aluno: Guilherme Candida de Amorim
 * Exercício: 31
 * Descrição: Função soma(int a, int b) que retorna a soma.
 * Data: 21/10/2026
 */

#include <stdio.h>

int soma(int a, int b) {
    return a + b;
}

int main() {
    int num1, num2;
    printf("Digite dois numeros: ");
    scanf("%d %d", &num1, &num2);

    printf("Resultado da soma via funcao: %d\n", soma(num1, num2));

    return 0;
}
