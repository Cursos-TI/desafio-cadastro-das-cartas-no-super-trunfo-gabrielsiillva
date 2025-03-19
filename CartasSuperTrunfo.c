#include <stdio.h>

#define MAX_CIDADES 10  // Número máximo de cidades que podem ser cadastradas

// Estrutura para armazenar os dados de uma cidade
struct Cidade {
    char codigo[4];  // Código da cidade (Ex: A01, B02)
    char nome[50];   // Nome da cidade
    int populacao;   // População da cidade
    float area;      // Área em km²
    float pib;       // PIB da cidade (em bilhões)
    int pontos_turisticos; // Número de pontos turísticos
};

int main() {
    struct Cidade cidades[MAX_CIDADES]; // Array de cidades
    int num_cidades, i;

    // Solicita a quantidade de cidades a serem cadastradas
    printf("Quantas cidades deseja cadastrar? (Máx %d): ", MAX_CIDADES);
    scanf("%d", &num_cidades);

    if (num_cidades > MAX_CIDADES || num_cidades < 1) {
        printf("Número inválido! Permitido entre 1 e %d cidades.\n", MAX_CIDADES);
        return 1;
    }

    // Cadastro das cidades
    for (i = 0; i < num_cidades; i++) {
        printf("\n--- Cadastro da Cidade %d ---\n", i + 1);

        printf("Código da cidade (Ex: A01, B02): ");
        scanf("%s", cidades[i].codigo);

        printf("Nome da cidade: ");
        scanf(" %[^\n]s", cidades[i].nome);  // Lê o nome da cidade com espaços

        printf("População: ");
        scanf("%d", &cidades[i].populacao);

        printf("Área (em km²): ");
        scanf("%f", &cidades[i].area);

        printf("PIB (em bilhões): ");
        scanf("%f", &cidades[i].pib);

        printf("Número de pontos turísticos: ");
        scanf("%d", &cidades[i].pontos_turisticos);
    }

    // Exibição dos dados cadastrados
    printf("\n===== CIDADES CADASTRADAS =====\n");
    for (i = 0; i < num_cidades; i++) {
        printf("\nCidade %d\n", i + 1);
        printf("Código: %s\n", cidades[i].codigo);
        printf("Nome: %s\n", cidades[i].nome);
        printf("População: %d habitantes\n", cidades[i].populacao);
        printf("Área: %.2f km²\n", cidades[i].area);
        printf("PIB: %.2f bilhões\n", cidades[i].pib);
        printf("Pontos turísticos: %d\n", cidades[i].pontos_turisticos);
    }

    return 0;
}