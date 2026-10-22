/*
 * Aluno: Guilherme Candida de Amorim
 * Exercício: 04
 * Descrição: Calculadora com menu executada repetidamente até escolher "Sair" (do-while).
 * Data: 21/10/2026
 */

#include <stdio.h>

int main() {
    int opcao;
    float n1, n2;

    do {
        printf("\n=== CALCULADORA COM REPETIÇÃO ===\n");
        printf("1 - Soma\n");
        printf("2 - Subtracao\n");
        printf("3 - Multiplicacao\n");
        printf("4 - Divisao\n");
        printf("0 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        if (opcao >= 1 && opcao <= 4) {
            printf("Digite dois numeros: ");
            scanf("%f %f", &n1, &n2);
        }

        switch (opcao) {
            case 1: printf("Resultado: %.2f\n", n1 + n2); break;
            case 2: printf("Resultado: %.2f\n", n1 - n2); break;
            case 3: printf("Resultado: %.2f\n", n1 * n2); break;
            case 4: 
                if (n2 != 0) printf("Resultado: %.2f\n", n1 / n2);
                else printf("Erro: Divisao por zero!\n");
                break;
            case 0: printf("Encerrando o programa...\n"); break;
            default: printf("Opcao invalida!\n");
        }
    } while (opcao != 0);

    return 0;
}