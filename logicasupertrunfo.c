#include <stdio.h>

int main() {
    // Dados da carta 1
    char estado1, nomeCidade1[50], codigoCarta1[4];
    int populacao1, pontosTuristicos1;
    float area1, pib1, densidade_populacional1, PIB_per_capita1;

    // Dados da carta 2
    char estado2, nomeCidade2[50], codigoCarta2[4];
    int populacao2, pontosTuristicos2;
    float area2, pib2, densidade_populacional2, PIB_per_capita2;

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

    //Calculos 1

    densidade_populacional1 = populacao1 / area1;
    PIB_per_capita1 = pib1 / populacao1;

    //Calculos 2
    densidade_populacional2 = populacao2 / area2;
    PIB_per_capita2 = pib2 / populacao2;

    // Saída formatada
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigoCarta1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f\n", densidade_populacional1);
    printf("PIB Per Capita: %.2f\n", PIB_per_capita1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigoCarta2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f\n", densidade_populacional2);
    printf("PIB Per Capita: %.2f\n", PIB_per_capita2);
    printf("Comparação de cartas(atributos:Densidade Populacional)\n");
    //Comparação das cartas
    printf("Carta 1 densidade populacional:%.2f\n", densidade_populacional1);
    printf("Carta 2 densidade populacional:%.2f\n", densidade_populacional2);
    
    if(densidade_populacional1 > densidade_populacional2){
    printf("Carta 1 venceu\n");
    } else {
    printf("Carta 2 venceu\n");

    }
    
    return 0;
}
