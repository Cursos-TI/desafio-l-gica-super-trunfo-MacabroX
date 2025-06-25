#include <stdio.h>
#include <string.h>

int main() {
    // Dados da carta 1
    char estado1, nomeCidade1[50], codigoCarta1[4];
    int populacao1, pontosTuristicos1;
    float area1, pib1, densidade_populacional1, PIB_per_capita1;

    // Dados da carta 2
    char estado2, nomeCidade2[50], codigoCarta2[4];
    int populacao2, pontosTuristicos2;
    float area2, pib2, densidade_populacional2, PIB_per_capita2;

    int escolha;

    // Entrada de dados da carta 1
    printf("Carta 1\n");
    printf("Estado (letra de A a H): ");
    scanf(" %c", &estado1);

    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigoCarta1);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]s", nomeCidade1);

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área (em km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Entrada de dados da carta 2
    printf("\nCarta 2\n");
    printf("Estado (letra de A a H): ");
    scanf(" %c", &estado2);

    printf("Código da Carta (ex: B03): ");
    scanf("%s", codigoCarta2);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]s", nomeCidade2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área (em km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

   
    densidade_populacional1 = populacao1 / area1;
    PIB_per_capita1 = pib1 / populacao1;

    densidade_populacional2 = populacao2 / area2;
    PIB_per_capita2 = pib2 / populacao2;

    // Menu interativo
    printf("\nEscolha o atributo para comparar:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turísticos\n");
    printf("5. Densidade Demográfica\n");
    printf("Opção: ");
    scanf("%d", &escolha);

    printf("\nComparando: %s vs %s\n", nomeCidade1, nomeCidade2);

    // Comparação com if-else
    if (escolha == 1) {
        printf("Atributo escolhido: População\n");
        printf("%s: %d habitantes\n", nomeCidade1, populacao1);
        printf("%s: %d habitantes\n", nomeCidade2, populacao2);
        if (populacao1 > populacao2)
            printf("Vencedora: %s\n", nomeCidade1);
        else if (populacao2 > populacao1)
            printf("Vencedora: %s\n", nomeCidade2);
        else
            printf("Empate!\n");
    } else if (escolha == 2) {
        printf("Atributo escolhido: Área\n");
        printf("%s: %.2f km²\n", nomeCidade1, area1);
        printf("%s: %.2f km²\n", nomeCidade2, area2);
        if (area1 > area2)
            printf("Vencedora: %s\n", nomeCidade1);
        else if (area2 > area1)
            printf("Vencedora: %s\n", nomeCidade2);
        else
            printf("Empate!\n");
    } else if (escolha == 3) {
        printf("Atributo escolhido: PIB\n");
        printf("%s: %.2f bilhões\n", nomeCidade1, pib1);
        printf("%s: %.2f bilhões\n", nomeCidade2, pib2);
        if (pib1 > pib2)
            printf("Vencedora: %s\n", nomeCidade1);
        else if (pib2 > pib1)
            printf("Vencedora: %s\n", nomeCidade2);
        else
            printf("Empate!\n");
    } else if (escolha == 4) {
        printf("Atributo escolhido: Pontos Turísticos\n");
        printf("%s: %d pontos\n", nomeCidade1, pontosTuristicos1);
        printf("%s: %d pontos\n", nomeCidade2, pontosTuristicos2);
        if (pontosTuristicos1 > pontosTuristicos2)
            printf("Vencedora: %s\n", nomeCidade1);
        else if (pontosTuristicos2 > pontosTuristicos1)
            printf("Vencedora: %s\n", nomeCidade2);
        else
            printf("Empate!\n");
    } else if (escolha == 5) {
        printf("Atributo escolhido: Densidade Demográfica (MENOR vence)\n");
        printf("%s: %.2f hab/km²\n", nomeCidade1, densidade_populacional1);
        printf("%s: %.2f hab/km²\n", nomeCidade2, densidade_populacional2);
        if (densidade_populacional1 < densidade_populacional2)
            printf("Vencedora: %s\n", nomeCidade1);
        else if (densidade_populacional2 < densidade_populacional1)
            printf("Vencedora: %s\n", nomeCidade2);
        else
            printf("Empate!\n");
    } else {
        printf("Opção inválida!\n");
    }

    return 0;
}
