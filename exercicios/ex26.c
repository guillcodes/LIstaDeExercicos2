/*
 * Aluno: Guilherme Candida de Amorim
 * Exercício: 26
 * Descrição: Grava nome, idade e salário num ficheiro funcionario.csv.
 * Data: 21/10/2026
 */

#include <stdio.h>

int main() {
    FILE *arq = fopen("funcionario.csv", "w");
    char nome[50];
    int idade;
    float salario;

    if (arq == NULL) {
        printf("Erro ao criar o arquivo CSV!\n");
        return 1;
    }

    printf("Digite o nome do funcionario: ");
    scanf("%49s", nome);
    printf("Digite a idade: ");
    scanf("%d", &idade);
    printf("Digite o salario: ");
    scanf("%f", &salario);

    fprintf(arq, "%s, %d, %.2f\n", nome, idade, salario);
    fclose(arq);

    printf("Dados salvos em 'funcionario.csv'!\n");

    return 0;
}
