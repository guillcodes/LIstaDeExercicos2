/*
 * Aluno: Guilherme Candida de Amorim
 * Exercício: 30
 * Descrição: Menu com do-while e funções para gerir dados num ficheiro.
 * Data: 21/10/2026
 */

#include <stdio.h>

void inserirdados() {
    FILE *arq = fopen("dados.txt", "a");
    char texto[100];
    if (arq != NULL) {
        printf("Digite o texto a inserir: ");
        scanf(" %99[^\n]", texto);
        fprintf(arq, "%s\n", texto);
        fclose(arq);
        printf("Dado inserido com sucesso!\n");
    }
}

void exibirdados() {
    FILE *arq = fopen("dados.txt", "r");
    char linha[100];
    if (arq != NULL) {
        printf("\n--- DADOS NO ARQUIVO ---\n");
        while (fgets(linha, sizeof(linha), arq) != NULL) {
            printf("%s", linha);
        }
        fclose(arq);
    } else {
        printf("Nenhum dado encontrado.\n");
    }
}

int main() {
    int opcao;
    do {
        printf("\n1) Inserir dados\n2) Exibir dados\n3) Sair\nEscolha: ");
        scanf("%d", &opcao);
        switch (opcao) {
            case 1: inserirdados(); break;
            case 2: exibirdados(); break;
            case 3: printf("Saindo...\n"); break;
            default: printf("Invalido!\n");
        }
    } while (opcao != 3);

    return 0;
}
