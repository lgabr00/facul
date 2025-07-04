#include <stdio.h>

struct Carta {
    char estado[50];
    char cidade[50];
    long int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    float densidade;
    float pib_per_capita;
};

int main() {
    int n, i;

    printf("Quantas cartas quer cadastrar? ");
    scanf("%d", &n);

    struct Carta cartas[10];

    for (i = 0; i < n; i++) {
        printf("\nCarta %d\n", i + 1);

        printf("Estado (uma palavra): ");
        scanf("%s", cartas[i].estado);

        printf("Cidade (uma palavra): ");
        scanf("%s", cartas[i].cidade);

        printf("Populacao (so numeros): ");
        scanf("%ld", &cartas[i].populacao);

        printf("Area (ex: 1234.56): ");
        scanf("%f", &cartas[i].area);

        printf("PIB em milhoes (ex: 12345.67): ");
        scanf("%f", &cartas[i].pib);

        printf("Qtd Pontos Turisticos: ");
        scanf("%d", &cartas[i].pontos_turisticos);

        if (cartas[i].area > 0 && cartas[i].populacao > 0) {
            cartas[i].densidade = cartas[i].populacao / cartas[i].area;
            cartas[i].pib_per_capita = cartas[i].pib / cartas[i].populacao;
        } else {
            cartas[i].densidade = 0;
            cartas[i].pib_per_capita = 0;
        }
    }

    printf("\n--- Cartas Registradas ---\n");

    for (i = 0; i < n; i++) {
        printf("\nCarta %d\n", i + 1);
        printf("Estado: %s\n", cartas[i].estado);
        printf("Cidade: %s\n", cartas[i].cidade);
        printf("Populacao: %ld\n", cartas[i].populacao);
        printf("Area: %.2f km2\n", cartas[i].area);
        printf("PIB: %.2f milhoes\n", cartas[i].pib);
        printf("Pontos Turisticos: %d\n", cartas[i].pontos_turisticos);
        printf("Densidade: %.2f hab/km2\n", cartas[i].densidade);
        printf("PIB per capita: %.2f\n", cartas[i].pib_per_capita);
    }

    printf("\nFim do cadastro.\n");
    return 0;
}
