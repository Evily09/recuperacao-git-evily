#include <stdio.h>

int main() {
    char nome[50];
    int idade;
    float nota;

    printf("=== CADASTRO DE ALUNO ===\n");

    printf("Digite o nome do aluno: ");
    scanf(" %[^\n]", nome);

    printf("Digite a idade: ");
    scanf("%d", &idade);

    printf("Digite a nota: ");
    scanf("%f", &nota);

    printf("\n=== DADOS DO ALUNO ===\n");
    printf("Nome: %s\n", nome);
    printf("Idade: %d anos\n", idade);
    printf("Nota: %.1f\n", nota);
    if (nota >= 6) {
    printf("Situacao: Aprovado\n");
} else {
    printf("Situacao: Reprovado\n");
}
    printf("Cadastro realizado com sucesso!\n");

    return 0;
}
