/*
 * Aluno: Guilherme Candida de Amorim
 * Exercício: 28
 * Descrição: Lê números de um ficheiro de texto e calcula a soma total.
 * Data: 21/10/2026
 */

#include <stdio.h>

int main() {
    FILE *arqCriar = fopen("numeros.txt", "w");
    if (arqCriar != NULL) {
        fprintf(arqCriar, "10\n20\n30\n40\n");
        fclose(arqCriar);
    }

    FILE *arq = fopen("numeros.txt", "r");
    int num, soma = 0;

    if (arq == NULL) {
        printf("Erro ao abrir numeros.txt!\n");
        return 1;
    }

    while (fscanf(arq, "%d", &num) == 1) {
        soma += num;
    }

    fclose(arq);
    printf("Soma de todos os numeros do arquivo: %d\n", soma);

    return 0;
}
