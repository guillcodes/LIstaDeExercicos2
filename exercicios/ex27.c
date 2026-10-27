/*
 * Aluno: Guilherme Candida de Amorim
 * Exercício: 27
 * Descrição: Lê e mostra no console os dados de funcionario.csv.
 * Data: 21/10/2026
 */

#include <stdio.h>

int main() {
    FILE *arq = fopen("funcionario.csv", "r");
    char nome[50];
    int idade;
    float salario;

    if (arq == NULL) {
        printf("Erro ao abrir o arquivo funcionario.csv!\n");
        return 1;
    }

    if (fscanf(arq, " %49[^,], %d, %f", nome, &idade, &salario) == 3) {
        printf("=== DADOS DO FUNCIONÁRIO ===\n");
        printf("Nome:    %s\n", nome);
        printf("Idade:   %d anos\n", idade);
        printf("Salario: R$ %.2f\n", salario);
    } else {
        printf("Erro ao ler o arquivo ou formato invalido.\n");
    }

    fclose(arq);

    return 0;
}
