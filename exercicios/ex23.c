/*
 * Aluno: Guilherme Candida de Amorim
 * Exercício: 23
 * Descrição: Pede 5 nomes ao utilizador e grava em nomes.txt.
 * Data: 21/10/2026
 */

#include <stdio.h>

int main() {
    FILE *arq = fopen("nomes.txt", "w");
    char nome[50];

    if (arq == NULL) {
        printf("Erro ao abrir arquivo!\n");
        return 1;
    }

    printf("Digite 5 nomes:\n");
    for (int i = 1; i <= 5; i++) {
        printf("Nome %d: ", i);
        scanf("%49s", nome);
        fprintf(arq, "%s\n", nome);
    }

    fclose(arq);
    printf("Nomes gravados com sucesso em 'nomes.txt'!\n");

    return 0;
}
