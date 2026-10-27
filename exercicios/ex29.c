/*
 * Aluno: Guilherme Candida de Amorim
 * Exercício: 29
 * Descrição: Copia ficheiro de origem para ficheiro de destino.
 * Data: 21/10/2026
 */

#include <stdio.h>

int main() {
    FILE *origem = fopen("teste.txt", "r");
    FILE *destino = fopen("copia_teste.txt", "w");
    int ch;

    if (origem == NULL || destino == NULL) {
        printf("Erro ao abrir os arquivos!\n");
        if (origem != NULL) fclose(origem);
        if (destino != NULL) fclose(destino);
        return 1;
    }

    while ((ch = fgetc(origem)) != EOF) {
        fputc(ch, destino);
    }

    fclose(origem);
    fclose(destino);

    printf("Arquivo copiado com sucesso para 'copia_teste.txt'!\n");

    return 0;
}
