/*
 * Aluno: Guilherme Candida de Amorim
 * Exercício: 22
 * Descrição: Lê do ficheiro teste.txt e mostra no terminal.
 * Data: 21/10/2026
 */

#include <stdio.h>

int main() {
    FILE *arq = fopen("teste.txt", "r");
    char linha[100];

    if (arq == NULL) {
        printf("Erro ao abrir o arquivo teste.txt!\n");
        return 1;
    }

    printf("Conteudo de 'teste.txt':\n");
    while (fgets(linha, sizeof(linha), arq) != NULL) {
        printf("%s", linha);
    }

    fclose(arq);

    return 0;
}
