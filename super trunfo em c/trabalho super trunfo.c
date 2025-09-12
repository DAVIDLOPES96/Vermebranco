#include <stdio.h>
#include <string.h>
// Programa que compara dois estados brasileiros com base em varios atributos
int main() {
    char estado1[50], estado2[50];
    char cidade1[50], cidade2[50];
    char codigo1[3], codigo2[3];
    int populacao1, populacao2;
    float area1, area2;
    double pib1, pib2;
    float densidade_populacional1, densidade_populacional2;
    float media_populacao, media_area, media_pib_per_capita, media_pontos_turisticos;
    float pib_per_capita1, pib_per_capita2;
    int pontos_turisticos1, pontos_turisticos2;
    float super_poder1, super_poder2;
    char comparacao_populacao[200], comparacao_area[200], comparacao_pib[200];

    double total_populacao, total_area, total_pib;
// Entrada de dados do primeiro estado
    printf("----informacoes do primeiro estado----\n");

    printf("Digite o nome do primeiro estado: ");
    scanf(" %[^\n]", estado1);

    printf("Digite a cidade capital do primeiro estado: ");
    scanf(" %[^\n]", cidade1);

    printf("Digite o codigo do primeiro estado (2 letras): ");
    scanf("%2s", codigo1);

    printf("Digite a populacao do primeiro estado: ");
    scanf("%d", &populacao1);

    printf("Digite a area do primeiro estado (em km²): ");
    scanf("%f", &area1);

    printf("Digite o numero de pontos turisticos do primeiro estado: ");
    scanf("%d", &pontos_turisticos1);

    printf("Digite o PIB per capita do primeiro estado: ");
    scanf("%f", &pib_per_capita1);
// Calculo do PIB, densidade populacional e super poder do primeiro estado
    pib1 = pib_per_capita1 * populacao1;
    densidade_populacional1 = populacao1 / area1;
    super_poder1 = (pontos_turisticos1 * 0.5) + (pib_per_capita1 * 0.3) + (densidade_populacional1 * 0.2);
    printf("O super poder do estado %s e: %.2f\n", estado1, super_poder1);
// Entrada de dados do segundo estado
    printf("----informacoes do segundo estado----\n");

    printf("Digite o nome do segundo estado: ");
    scanf(" %[^\n]", estado2);

    printf("Digite a cidade capital do segundo estado: ");
    scanf(" %[^\n]", cidade2);

    printf("Digite o codigo do segundo estado (2 letras): ");
    scanf("%2s", codigo2);

    printf("Digite a populacao do segundo estado: ");
    scanf("%d", &populacao2);

    printf("Digite a area do segundo estado (em km²): ");
    scanf("%f", &area2);

    printf("Digite o numero de pontos turisticos do segundo estado: ");
    scanf("%d", &pontos_turisticos2);

    printf("Digite o PIB per capita do segundo estado: ");
    scanf("%f", &pib_per_capita2);
// Calculo do PIB, densidade populacional e super poder do segundo estado
    pib2 = pib_per_capita2 * populacao2;
    densidade_populacional2 = populacao2 / area2;
    super_poder2 = (pontos_turisticos2 * 0.5) + (pib_per_capita2 * 0.3) + (densidade_populacional2 * 0.2);
    printf("O super poder do estado %s e: %.2f\n", estado2, super_poder2);
// Calculo das medias, totais e comparacoes
    media_populacao = (populacao1 + populacao2) / 2.0;
    media_area = (area1 + area2) / 2.0;
    media_pontos_turisticos = (pontos_turisticos1 + pontos_turisticos2) / 2.0;
    media_pib_per_capita = (pib_per_capita1 + pib_per_capita2) / 2.0;
    total_populacao = populacao1 + populacao2;
    total_area = area1 + area2;
    total_pib = pib1 + pib2;
// Comparacoes entre as populacoes, areas e PIBs dos estados
    if (populacao1 > populacao2) {
        snprintf(comparacao_populacao, sizeof(comparacao_populacao), "%s tem maior populacao que %s", estado1, estado2);
    } else if (populacao1 < populacao2) {
        snprintf(comparacao_populacao, sizeof(comparacao_populacao), "%s tem maior populacao que %s", estado2, estado1);
    } else {
        snprintf(comparacao_populacao, sizeof(comparacao_populacao), "Ambos os estados tem a mesma populacao");
    }

    if (area1 > area2) {
        snprintf(comparacao_area, sizeof(comparacao_area), "%s e maior que %s", estado1, estado2);
    } else if (area1 < area2) {
        snprintf(comparacao_area, sizeof(comparacao_area), "%s e maior que %s", estado2, estado1);
    } else {
        snprintf(comparacao_area, sizeof(comparacao_area), "Ambos os estados tem a mesma area");
    }

    if (pib1 > pib2) {
        snprintf(comparacao_pib, sizeof(comparacao_pib), "%s tem PIB maior que %s", estado1, estado2);
    } else if (pib1 < pib2) {
        snprintf(comparacao_pib, sizeof(comparacao_pib), "%s tem PIB maior que %s", estado2, estado1);
    } else {
        snprintf(comparacao_pib, sizeof(comparacao_pib), "Ambos os estados tem o mesmo PIB");
    }
// Impressao do resumo dos estados, medias, totais e comparacoes
    printf("\n----Resumo dos estados----\n");

    printf("Estado 1: %s, Capital: %s, Codigo: %s\n", estado1, cidade1, codigo1);
    printf("Populacao: %d, Area: %.2f km², Pontos Turisticos: %d, PIB per capita: %.2f, Densidade Populacional: %.2f hab/km²\n",
           populacao1, area1, pontos_turisticos1, pib_per_capita1, densidade_populacional1);

    printf("Estado 2: %s, Capital: %s, Codigo: %s\n", estado2, cidade2, codigo2);
    printf("Populacao: %d, Area: %.2f km², Pontos Turisticos: %d, PIB per capita: %.2f, Densidade Populacional: %.2f hab/km²\n",
           populacao2, area2, pontos_turisticos2, pib_per_capita2, densidade_populacional2);

    printf("\n--- Medias ---\n");
    printf("Media da Populacao: %.2f\n", media_populacao);
    printf("Media da Area: %.2f km²\n", media_area);
    printf("Media de Pontos Turisticos: %.2f\n", media_pontos_turisticos);
    printf("Media do PIB per capita: %.2f\n", media_pib_per_capita);

    printf("\n--- Totais ---\n");
    printf("Total da Populacao: %.0f\n", total_populacao);
    printf("Total da Area: %.2f km²\n", total_area);
    printf("Total do PIB: %.2f\n", total_pib);

    printf("\n--- Comparacoes ---\n");
    printf("Comparacao de Populacao: %s\n", comparacao_populacao);
    printf("Comparacao de Area: %s\n", comparacao_area);
    printf("Comparacao de PIB: %s\n", comparacao_pib);

    return 0;
}