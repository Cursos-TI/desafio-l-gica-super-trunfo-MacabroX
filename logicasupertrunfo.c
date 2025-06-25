#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Dados da carta 1
    char estado1, nomeCidade1[50], codigoCarta1[4];
    int populacao1, pontosTuristicos1;
    float area1, pib1, densidade_populacional1, PIB_per_capita1;

    // Dados da carta 2
    char estado2, nomeCidade2[50], codigoCarta2[4];
    int populacao2, pontosTuristicos2;
    float area2, pib2, densidade_populacional2, PIB_per_capita2;

    int escolha, escolha2;

    srand(time(NULL)); // Inicializa o gerador de números aleatórios

    // Entrada de dados da carta 1
    printf("Carta 1\n");
    printf("Estado (letra de A a H): ");
    scanf(" %c", &estado1);

    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigoCarta1);

    printf("Nome da Cidade: ");
    scanf(" %[^]", nomeCidade1);

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
    scanf(" %[^]", nomeCidade2);

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

    // Menu simples com comparação de dois atributos
    printf("\nEscolha dois atributos para comparar (ex: 1 4):\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turísticos\n");
    printf("5. Densidade Demográfica (MENOR vence)\n");

    printf("Escolha 1: ");
    scanf("%d", &escolha);
    printf("Escolha 2: ");
    scanf("%d", &escolha2);

    int pontos1 = 0, pontos2 = 0;
    int i;
    for (i = 0; i < 2; i++) {
        int op = (i == 0) ? escolha : escolha2;
        switch(op) {
            case 1:
                if (populacao1 > populacao2) pontos1++;
                else if (populacao2 > populacao1) pontos2++;
                break;
            case 2:
                if (area1 > area2) pontos1++;
                else if (area2 > area1) pontos2++;
                break;
            case 3:
                if (pib1 > pib2) pontos1++;
                else if (pib2 > pib1) pontos2++;
                break;
            case 4:
                if (pontosTuristicos1 > pontosTuristicos2) pontos1++;
                else if (pontosTuristicos2 > pontosTuristicos1) pontos2++;
                break;
            case 5:
                if (densidade_populacional1 < densidade_populacional2) pontos1++;
                else if (densidade_populacional2 < densidade_populacional1) pontos2++;
                break;
            default:
                printf("Atributo inválido!\n");
        }
    }

    printf("\nResultado final:\n");
    if (pontos1 > pontos2)
        printf("Vencedora: %s\n", nomeCidade1);
    else if (pontos2 > pontos1)
        printf("Vencedora: %s\n", nomeCidade2);
    else
        printf("Empate!\n");

    return 0;
}
