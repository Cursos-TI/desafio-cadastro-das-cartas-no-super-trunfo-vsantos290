#include <stdio.h>

// Estrutura que representa uma carta
typedef struct {
    char nome[50];
    float area;
    unsigned long int populacao;
    double pib;
    float densidade;
    float pibPerCapita;
} Carta;

int main() {
    Carta carta1, carta2;

    printf("=== Cadastro das Cartas ===\n\n");

    // Entrada da Carta 1
    printf("---- Carta 1 ----\n");
    printf("Nome: ");
    scanf(" %[^\n]", carta1.nome);
    printf("Área (em km²): ");
    scanf("%f", &carta1.area);
    printf("População: ");
    scanf("%lu", &carta1.populacao);
    printf("PIB (em reais): ");
    scanf("%lf", &carta1.pib);

    // Entrada da Carta 2
    printf("\n---- Carta 2 ----\n");
    printf("Nome: ");
    scanf(" %[^\n]", carta2.nome);
    printf("Área (em km²): ");
    scanf("%f", &carta2.area);
    printf("População: ");
    scanf("%lu", &carta2.populacao);
    printf("PIB (em reais): ");
    scanf("%lf", &carta2.pib);

    // Cálculos automáticos (sem if/else ou laços)
    carta1.densidade = carta1.populacao / carta1.area;
    carta2.densidade = carta2.populacao / carta2.area;

    carta1.pibPerCapita = carta1.pib / carta1.populacao;
    carta2.pibPerCapita = carta2.pib / carta2.populacao;

    // Saída dos dados das duas cartas
    printf("\n=== Atributos das Cartas ===\n");

    printf("\n--- Carta 1: %s ---\n", carta1.nome);
    printf("Área: %.2f km²\n", carta1.area);
    printf("População: %lu\n", carta1.populacao);
    printf("PIB: R$ %.2lf\n", carta1.pib);
    printf("Densidade Populacional: %.2f hab/km²\n", carta1.densidade);
    printf("PIB per Capita: R$ %.2f\n", carta1.pibPerCapita);

    printf("\n--- Carta 2: %s ---\n", carta2.nome);
    printf("Área: %.2f km²\n", carta2.area);
    printf("População: %lu\n", carta2.populacao);
    printf("PIB: R$ %.2lf\n", carta2.pib);
    printf("Densidade Populacional: %.2f hab/km²\n", carta2.densidade);
    printf("PIB per Capita: R$ %.2f\n", carta2.pibPerCapita);

    return 0;
}
