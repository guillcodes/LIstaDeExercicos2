/*
 * Aluno: Guilherme Candida de Amorim
 * Exercício: 21
 * Descrição: Escreve texto no ficheiro teste.txt.
 * Data: 21/10/2026
 */

#include <stdio.h>

int main() {
    FILE *arq = fopen("teste.txt", "w");
    if (arq == NULL) {
        printf("Erro ao criar o arquivo!\n");
        return 1;
    }

    fprintf(arq, "Primeira linha de um arquivo.\n");
    fclose(arq);

    printf("Texto gravado com sucesso em 'teste.txt'!\n");

    return 0;
}
