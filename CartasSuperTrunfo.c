#include <stdio.h>
int main() {

    // --- definição das variaveis (CARTAS 1)

  char estado1;
  char codigo1[4];
  char cidade1[50];
  int populacao1;
  float area1;
  float pib1;
  int pontosTuristicos1;
  float pibPerCapita1;
  float densidade1;
  float pibCapita1;
  float superPoder1;



      // --- definição das variaveis (CARTAS 2)


  char estado2;
  char codigo2[4];
  char cidade2[50];
  int populacao2;
  float area2;
  float pib2;
  int pontosTuristicos2;
  float pibPerCapita2;
  float densidade2;
  float pibCapita2;
  float superPoder2;

      // --- Cadastro da carta (CARTAS 1)

  printf("Cadastro da carta 1 \n");

  printf("Estado A: ");
  scanf(" %c", &estado1);

  printf("codigo A01: ");
  scanf(" %s", codigo1);

  printf("Nome da cidade: ");
  scanf(" %[^\n]", cidade1);
  
  printf("Popolacao: ");
  scanf(" %d", &populacao1);

  printf("Area (km2): ");
  scanf(" %f", &area1);

  printf("PIB: ");
  scanf(" %f", &pib1);

  printf("Número de Pontos Turísticos: ");
  scanf(" %d", &pontosTuristicos1);

  densidade1 = (float)populacao1 / area1;
  pibPerCapita1 = pib1 / (float)populacao1;

  printf("\n");
  
  // --- Cadastro da carta (CARTAS 2)

  printf("Cadastro da carta 2 \n");

  printf("Estado B: ");
  scanf(" %c", &estado2);

  printf("codigo B02: ");
  scanf(" %s", &codigo2);

  printf("Nome da cidade: ");
  scanf(" %[^\n]", cidade2);
  
  printf("Populacao: ");
  scanf(" %d", &populacao2);

  printf("Area (km2): ");
  scanf(" %f", &area2);

  printf("PIB: ");
  scanf(" %f", &pib2);

  printf("Número de Pontos Turísticos: ");
  scanf(" %d", &pontosTuristicos2);

    densidade2 = (float)populacao2 / area2;
    pibPerCapita2 = pib2 / (float)populacao2;
 
  // Exibição - Carta 1
    printf("\n=== Carta 1 ===\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: %.2f Reais \n", pibPerCapita1);
  

    // Exibição - Carta 2
    printf("\n=== Carta 2 ===\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: %.2f Reais \n", pibPerCapita2);
   

// Cálculos da Carta 1
    densidade1 = (float)populacao1 / area1;
    pibCapita1 = pib1 / (float)populacao1;
    
    // Cálculo do Super Poder:// 

    superPoder1 = (float)populacao1 + area1 + pib1 + (float)pontosTuristicos1 + pibCapita1 + (1.0f / densidade1);

    // --- Cadastro da Carta 2 --- (Repetir processo)
    
    superPoder1 = (float)populacao1 + area1 + pib1 + (float)pontosTuristicos1 + pibCapita1 + (1.0f / densidade1);

    // Cálculos da Carta 2
    densidade2 = (float)populacao2 / area2;
    pibCapita2 = pib2 / (float)populacao2;
    superPoder2 = (float)populacao2 + area2 + pib2 + (float)pontosTuristicos2 + pibCapita2 + (1.0f / densidade2);
// --- Comparação de Cartas ---
    printf("\nComparação de Cartas:\n");

    // Lógica: (Atributo1 > Atributo2) resulta em 1 (Verdadeiro) ou 0 (Falso)
    printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Área: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontosTuristicos1 > pontosTuristicos2);
    
    // ATENÇÃO: Na Densidade Populacional, o MENOR valor vence!
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade1 < densidade2);
    
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibCapita1 > pibCapita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", superPoder1 > superPoder2);

return 0;
} 
