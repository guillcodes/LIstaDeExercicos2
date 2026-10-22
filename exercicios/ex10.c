/*
 * Aluno: Guilherme Candida de Amorim
 * Exercício: 10
 * Descrição: Sequência de Fibonacci usando enquanto e comparação com for.
 * Data: 21/10/2026
 */

#include <stdio.h>

int main() {
    int N;
    long long t1 = 1, t2 = 1, proximoTermo;

    printf("Digite N para Fibonacci: ");
    if (scanf("%d", &N) != 1 || N <= 0) return 1;

    printf("Versao com 'while': ");
    int i = 1;
    while (i <= N) {
        if (i == 1) printf("%lld", t1);
        else if (i == 2) printf(", %lld", t2);
        else {
            proximoTermo = t1 + t2;
            t1 = t2;
            t2 = proximoTermo;
            printf(", %lld", proximoTermo);
        }
        i++;
    }
    printf("\n\nComparacao: O laco 'while' e ideal para condicoes dinamicas, enquanto 'for' e focado em contagens fixas.\n");

    return 0;
}
