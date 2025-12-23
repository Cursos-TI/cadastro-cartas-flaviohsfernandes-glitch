
#include <stdio.h>

int main() {
    /* ===== Declaração das variáveis da Carta 1 ===== */
    char estado1[3], codigo1[10], nome1[50];
    unsigned long int populacao1;
    float area1, pib1;
    int pontosTuristicos1;

    /* ===== Declaração das variáveis da Carta 2 ===== */
    char estado2[3], codigo2[10], nome2[50];
    unsigned long int populacao2;
    float area2, pib2;
    int pontosTuristicos2;

    /* ===== Variáveis calculadas ===== */
    float densidade1, densidade2;
    float pibPerCapita1, pibPerCapita2;
    float superPoder1, superPoder2;

    /* ===== Leitura dos dados da Carta 1 ===== */
    printf("Digite os dados da Carta 1:\n");
    printf("Estado: ");
    scanf("%s", estado1);
    printf("Codigo: ");
    scanf("%s", codigo1);
    printf("Nome: ");
    scanf(" %[^\n]", nome1);
    printf("Populacao: ");
    scanf("%lu", &populacao1);
    printf("Area: ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1);

    /* ===== Leitura dos dados da Carta 2 ===== */
    printf("\nDigite os dados da Carta 2:\n");
    printf("Estado: ");
    scanf("%s", estado2);
    printf("Codigo: ");
    scanf("%s", codigo2);
    printf("Nome: ");
    scanf(" %[^\n]", nome2);
    printf("Populacao: ");
    scanf("%lu", &populacao2);
    printf("Area: ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);

    /* ===== Cálculos ===== */
    densidade1 = (float)populacao1 / area1;
    densidade2 = (float)populacao2 / area2;

    pibPerCapita1 = pib1 / (float)populacao1;
    pibPerCapita2 = pib2 / (float)populacao2;

    superPoder1 =
        (float)populacao1 +
        area1 +
        pib1 +
        pontosTuristicos1 +
        pibPerCapita1 +
        (1.0f / densidade1);

    superPoder2 =
        (float)populacao2 +
        area2 +
        pib2 +
        pontosTuristicos2 +
        pibPerCapita2 +
        (1.0f / densidade2);

    /* ===== Comparações ===== */
    printf("\nComparacao de Cartas:\n\n");

    printf("Populacao: Carta %d venceu (%d)\n",
           populacao1 > populacao2 ? 1 : 2,
           populacao1 > populacao2);

    printf("Area: Carta %d venceu (%d)\n",
           area1 > area2 ? 1 : 2,
           area1 > area2);

    printf("PIB: Carta %d venceu (%d)\n",
           pib1 > pib2 ? 1 : 2,
           pib1 > pib2);

    printf("Pontos Turisticos: Carta %d venceu (%d)\n",
           pontosTuristicos1 > pontosTuristicos2 ? 1 : 2,
           pontosTuristicos1 > pontosTuristicos2);

    /* Para densidade, menor vence */
    printf("Densidade Populacional: Carta %d venceu (%d)\n",
           densidade1 < densidade2 ? 1 : 2,
           densidade1 < densidade2);

    printf("PIB per Capita: Carta %d venceu (%d)\n",
           pibPerCapita1 > pibPerCapita2 ? 1 : 2,
           pibPerCapita1 > pibPerCapita2);

    printf("Super Poder: Carta %d venceu (%d)\n",
           superPoder1 > superPoder2 ? 1 : 2,
           superPoder1 > superPoder2);

    return 0;
}
