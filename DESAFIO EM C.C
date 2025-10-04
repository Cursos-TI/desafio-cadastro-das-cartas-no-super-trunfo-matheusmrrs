#include <stdio.h>

int main() {
    // === Declaração das variáveis da Carta 1 ===
    char estado1[30] = "Ceara";
    char codigo1[4] = "C01";
    char nomeCidade1[30] = "Fortaleza";
    unsigned long int populacao1 = 12325000;
    float area1 = 1521.11;
    float pib1 = 699.28; 
    int pontosTuristicos1 = 50;
    float DensidadePopulacional1 = populacao1 / area1;
    float PibPerCapita1 = (pib1 * 1000000000.0) / populacao1;
    float resultado1 = (float)populacao1 + area1 + pib1 + pontosTuristicos1 + PibPerCapita1 + (1.0 / DensidadePopulacional1);
 
    // === Declaração das variáveis da Carta 2 ===
    char estado2[30] ="Para";
    char codigo2[4] = "P01";
    char nomeCidade2[30] = "Belem";
    unsigned long int populacao2 = 6748000;
    float area2 = 1200.25;
    float pib2 = 300.50;
    int pontosTuristicos2 = 30;
    float DensidadePopulacional2 = populacao2 / area2;
    float PibPerCapita2 = (pib2 * 1000000000.0) / populacao2;
    float resultado2 = (float)populacao2 + area2 + pib2 + pontosTuristicos2 + PibPerCapita2 + (1.0 / DensidadePopulacional2);
   
    // ===== Entrada de dados da Carta 1 =====
    printf("=== Carta 1 ===\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2lf hab/km²\n", DensidadePopulacional1);
    printf("PIB per Capita: %.2f\n", PibPerCapita1);
    printf("Super Poder: %.2f\n", resultado1);


    // ===== Entrada de dados da Carta 2 =====
    printf("\n=== Carta 2 ===\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2lf hab/km²\n", DensidadePopulacional2);
    printf("PIB per Capita: %.2f\n", PibPerCapita2);
    printf("Super Poder: %.2f\n", resultado2);

     printf("\n=== Comparacao de Cartas ===\n");

    printf("Populacao: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Area: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turisticos: Carta 1 venceu (%d)\n", pontosTuristicos1 > pontosTuristicos2);
    printf("Densidade Populacional: Carta 2 venceu (%d)\n", DensidadePopulacional1 < DensidadePopulacional2); // menor vence
    printf("PIB per Capita: Carta 1 venceu (%d)\n",PibPerCapita1 > PibPerCapita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", resultado1 > resultado2);
    
    return 0;
}