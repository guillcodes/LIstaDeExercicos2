/*
 * Aluno: Guilherme Candida de Amorim
 * Exercício: 25
 * Descrição: Anexa dados ao ficheiro nomes.txt no modo "a".
 * Data: 21/10/2026
 */

#include <stdio.h>

int main() {
    FILE *arq = fopen("nomes.txt", "a");
    char nome[50];

    if (arq == NULL) {
        printf("Erro ao abrir arquivo!\n");
        return 1;
    }

    printf("Digite um novo nome para anexar ao arquivo: ");
    scanf("%49s", nome);

    fprintf(arq, "%s\n", nome);
    fclose(arq);

    printf("Nome anexado ao final de 'nomes.txt' com sucesso!\n");

    return 0;
}
