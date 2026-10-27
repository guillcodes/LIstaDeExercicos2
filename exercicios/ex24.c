/*
 * Aluno: Guilherme Candida de Amorim
 * Exercício: 24
 * Descrição: Lê nomes.txt e conta quantos têm mais de 5 caracteres.
 * Data: 21/10/2026
 */

#include <stdio.h>
#include <string.h>

int main() {
    FILE *arq = fopen("nomes.txt", "r");
    char nome[50];
    int cont = 0;

    if (arq == NULL) {
        printf("Erro ao abrir o arquivo nomes.txt!\n");
        return 1;
    }

    while (fscanf(arq, "%49s", nome) == 1) {
        if (strlen(nome) > 5) {
            cont++;
        }
    }

    fclose(arq);
    printf("Quantidade de nomes com mais de 5 caracteres: %d\n", cont);

    return 0;
}
